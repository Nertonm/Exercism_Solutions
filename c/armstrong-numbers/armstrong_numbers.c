#include <stdio.h>
#include <math.h>
#include "armstrong_numbers.h"

bool is_armstrong_number(){
        int number;
	scanf("%i",&number);
    int count=0;
	int numberv= number;
    int var = number;
    //conta as casas decimais
    while(var >0){     
    	count++;
        var = var/10;   
    }
    // caso de uma casa decimal
    if (count == 1)
        {
        return true;
        }
    int vetor[count], eq = 0;
    for(int i =0; i<count;i++){
        vetor[i] = numberv % 10;
	    numberv = numberv / 10;
	    eq = eq + pow(vetor[i], count); 
	}
    
	return (eq == number);
}


