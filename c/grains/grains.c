#include "grains.h"


uint64_t square(uint8_t index){
    uint64_t num = 1;
    if (!index) return 0;
    for (uint64_t i = 2; i <= index; i++)
        num = num * 2;   
    return num;
}

uint64_t total(void){
    return square(65) - 1;
}


