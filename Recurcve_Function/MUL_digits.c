#include <stdio.h>

int Mul_digits(int n){

	if(n < 10){
		return n;
	}
	return (n % 10) * Mul_digits(n / 10);
}
