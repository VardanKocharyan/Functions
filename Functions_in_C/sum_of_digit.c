#include <stdio.h>

int SumDigit(int num){
	int sum = 0;
	while(num){
		sum += num % 10;
		num /= 10;
	}
	if(sum < 0){
		return -sum;
	}
	
	return sum;
}
