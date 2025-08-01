#include <stdio.h>

int Even(int * ptr , const int size){

	int sum = size;
	for(int i = 0 ; i < size ; ++i){
		if(*(ptr + i) & 1){
			--sum;
		}
	}
	return sum;
}
