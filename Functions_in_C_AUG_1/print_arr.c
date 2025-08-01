#include <stdio.h>

void Print_Arr(int*ptr , const int size){
	printf("The result is:\n");
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = %d\n" , i , *(ptr + i));
	}
}
