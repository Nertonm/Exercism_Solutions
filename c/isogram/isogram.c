#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

bool is_isogram(const char phrase[])
{
    int len = strlen(phrase);
	for (int j = 0; j < len; ++j) {
		for (int i = j + 1; i < len; ++i) {
            if (phrase[j] == ' ' || phrase[j] == '-')
                continue; 
			if (tolower(phrase[j]) == tolower(phrase[i])){
				return false;
			}
		}
	}
	return true;	
}

