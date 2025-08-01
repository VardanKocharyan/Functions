#include <stdio.h>

int* Double_Arr_Values(int *ptr , int const size){
	for(int i = 0 ; i < size ; ++i){
		*(ptr + i) *= 2;
	}
	return ptr;
}


