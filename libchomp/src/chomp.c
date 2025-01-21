#include <string.h>
#include "chomp.h"

char* chomp(char* s) {

	char* o = strstr(s, "\n");
	if (o == NULL || *o == '\0')
		return s;
	else {
		*o = '\0';
		return s;
	}
}
