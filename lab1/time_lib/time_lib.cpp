#include "time_lib.h"
#include <iostream>

namespace time_lib {
    void time_calc(int hour_1, int min_1, int hour_2, int min_2) {
        int min_sum = min_1 + min_2;
        int hour_sum = hour_1 + hour_2;
        if (min_sum >= 60){
            min_sum -= 60;
            hour_sum += 1;
        }
        if (hour_sum >= 24){
            hour_sum -= 24;
        }
        std::cout << hour_sum << "h\n" << min_sum << "m";
    }
}