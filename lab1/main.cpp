#include <iostream>
#include "mymath/mymath.h"
#include "time_lib/time_lib.h"

int main() {
    setlocale(LC_ALL, "Russian");

    //Библиотека mymath
    std::cout << "Я умею суммировать! Зацени 1+1=";
    std::cout << mymath::sum(10, 32) << std::endl;

    std::cout << "Я умею считать время! Зацени\n";
    time_lib::time_calc(17, 5, 5, 59);


    return 0;
}
