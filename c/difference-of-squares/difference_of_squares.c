#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    unsigned int num = 0;
    for(unsigned int i = 1; i < number; i++)
        num += i*i;
    return num;
}
unsigned int square_of_sum(unsigned int number);
unsigned int difference_of_squares(unsigned int number);

