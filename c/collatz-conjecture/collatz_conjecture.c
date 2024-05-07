#include "collatz_conjecture.h"

int steps(int start){
    int ret = 0;
    if (start < 1) return -1;
    for (ret = 0; start != 1; ret++){
        if (start % 2) 
            start = (start * 3) + 1;
        else
            start = start / 2; 
    }
    return ret;
}


