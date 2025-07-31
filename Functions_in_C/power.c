#include <stdio.h>

int Power(int num , int power){
	int res = 1;
	if(power == 0){
		return 1;
	}
	
	while(power){
		res *= num;
		--power;
	}
	return res;
}
