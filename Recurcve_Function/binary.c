#include <stdio.h>

void binary(int n){
	
	if(n < 0){
		n = -n;;
	}
	
	if(n == 0){
		return ;
	}

	binary(n >> 1);
	printf("%d" , n & 1);

}
