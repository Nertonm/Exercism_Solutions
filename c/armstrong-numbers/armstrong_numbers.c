#include <stdio.h>
#include <math.h>
#include "armstrong_numbers.h"

bool is_armstrong_number(int number){
    int count = 0, temp = number;
    int var = number;
    //conta as casas decimais
    while(var > 0){     
        var = var / 10;
        count++;   
    }
    // caso de uma casa decimal
    if (count == 1)
        {
        return true;
        }
    int vetor[count], eq = 0, i = 0;
    while (temp > 0){
        vetor[i] = temp % 10;
	    eq = eq + pow(vetor[i], count); 
        temp = temp / 10;
        i++;
	}
	return (eq == number);
}


