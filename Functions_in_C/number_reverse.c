#include <stdio.h>

int NumReverse(int num){
	int res = 0;
	while(num){
		res = res * 10 + num % 10;
		num /= 10;
	}
	return res;
}
