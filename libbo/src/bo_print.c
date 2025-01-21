#include <stdio.h>
#include <stdarg.h>
#include <bo.h>

#if defined(__APPLE__)
  #include <machine/endian.h>
#elif defined(__sun)
  #include <sys/isa_defs.h>
  #define __LITTLE_ENDIAN 1234
  #define __BIG_ENDIAN 4321
  #ifdef _LITTLE_ENDIAN
    #define __BYTE_ORDER __LITTLE_ENDIAN
  #else
    #define __BYTE_ORDER __BIG_ENDIAN
  #endif
#else
  #include <endian.h>
#endif

static int bo_countfmt(const char *format) {
	int args = 0;
	char *cp = (char*)format;
	while (*cp != '\0') {
		if (*cp == '%') {
			if (*(cp+1) == '%')
				cp++;
			else
				args++;
		}
		cp++;
	}
	return args;
}

static int bo_fprintf(int *tot_wrote, FILE *restrict file, const char *format, ...) {
	int wrote = 0;
	int argc = bo_countfmt(format);
	va_list ap;

	va_start(ap, format);
	wrote = vfprintf(file, format, ap);
	if (wrote != EOF)
		*tot_wrote += wrote;
	va_end(ap);

	return wrote;	
}

static int bo_fputc(int *tot_wrote, int c, FILE *restrict file) {
	int wrote = fputc(c, file);
	if (wrote != EOF)
		*tot_wrote += wrote;
	return wrote;	
}

int bo_print(const void* ptr, const int size) {
	return bo_fprint(stdout, ptr, size);
}

int bo_fprint(FILE *restrict file, const void* ptr, const int size) {

        char *p = (char*)ptr;
	int tot_wrote = 0, wrote = 0;

#if __BYTE_ORDER == __LITTLE_ENDIAN
        for (int i = size - 1; i >= 0; i--) {
#else
        for (int i = 0; i < size; i++) {
#endif
                char c = *(p + i);
                wrote = bo_fprintf(&tot_wrote, file, "%02hhx", c);
		if (wrote == EOF)
			return EOF;
        }
        wrote = bo_fputc(&tot_wrote, '\n', file);
	if (wrote == EOF)
		return EOF;

        for (int i = 0; i < size; i++) {
                char c = *(p + i);
                char a[8] = { BYTE_TO_BINARY(c) };
                for (int j = 0; j < 8; j++) {
                        wrote = bo_fputc(&tot_wrote, a[j], file);
			if (wrote == EOF)
				return EOF;
		}
                wrote = bo_fputc(&tot_wrote, ' ', file);
		if (wrote == EOF)
			return EOF;
        }
        wrote = bo_fputc(&tot_wrote, '\n', file);
	if (wrote == EOF)
		return EOF;

	return tot_wrote;
}
