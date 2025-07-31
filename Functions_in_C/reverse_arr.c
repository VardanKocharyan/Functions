#include <stdio.h>

void Reverse_Arr(int *ptr , int const size){

	for(int i = 0 ; i < size / 2 ; ++i){
		if(i < size - i - 1){
			int temp = ptr[i];
			ptr[i] = ptr[size - i - 1];
			ptr[size - i - 1] = temp;
		}
	}
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = %d\n" , i , ptr[i]);
	}
}
