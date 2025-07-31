#include <stdio.h>

void simple(int a){

	int sum = 0;
	if(a == 1){
		printf("The number %d is neither prime nor composite." , a);
	}
	else if (a == 2 || a == 3){
		printf("the number %d is prime:" , a);
	}
	else{
		for(int i = 2 ; i < a / 2 + 1 ; ++i){
			if(a % i == 0){
				++sum;
			}
		}

		if(sum){
			printf("%d is composite:" , a);
		}
		else{
			printf("%d is prime:" , a);
		}
	}
}
			


