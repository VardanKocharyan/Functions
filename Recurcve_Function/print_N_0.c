#include <stdio.h>

void print_N_to_null(int n){
	
	if(n < 0){
		return;
	}
	printf("%d " , n);
	print_N_to_null(n - 1);
}
