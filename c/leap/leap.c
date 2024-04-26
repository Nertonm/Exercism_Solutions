#include "leap.h"

bool leap_year(int year){
    if (!(year % 4)){
        if(!(year % 100))
            if (year % 400) return false;
        return true;
    }
    return false;
}



