#include <stdio.h>

void print_null_to_N(int n){

	if(n < 0){
		return;
	}
	print_null_to_N(n - 1);
	printf("%d " , n);
}

