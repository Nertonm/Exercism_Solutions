#include "collatz_conjecture.h"

int steps(int start){
    int ret = 0;
    for (int i = 0; start > 1; i++){
        if (start % 2)
            start = (start * 3) + 1;
        start = start / 2; 
    }
    return ret;
}


