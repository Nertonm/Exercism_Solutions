#include "collatz_conjecture.h"

int steps(int start){
    int ret = 0;
    if (start < 1) return -1;
    for (int i = 0; start != 1; i++){
        if (start % 2)
            start = (start * 3) + 1;
        start = start / 2; 
    }
    return ret;
}


