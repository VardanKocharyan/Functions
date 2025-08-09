#include <stdio.h>
void Print_reverse_arr(int * p , int SIZE){
	if(SIZE - 1 < 0){
		return;
	}
	printf("%d "  , p[SIZE - 1]);
	Print_reverse_arr(p ,SIZE - 1);
}

