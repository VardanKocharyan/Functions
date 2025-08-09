#include <stdio.h>

int fibonacci_rec(int index){

	if(index < 2){
		return index;
	}
	return fibonacci_rec(index - 1) + fibonacci_rec(index - 2);
}
