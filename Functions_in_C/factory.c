#include <stdio.h>

int Factory(int a){

	int res = 1;
	while(a){
		res *= a--;
	}
	return res;
}
