#include <iostream>

int main(void) {

    int num = -1;
    //int &refZero = 0;
    const int &refZero = 0;
    int &refNum = num;

    refNum = refZero;

    std::cout << "refZero: " << refZero << std::endl;
    std::cout << "refNum: " << refNum << std::endl;
    return 0;
}
