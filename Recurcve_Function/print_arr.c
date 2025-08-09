#include <stdio.h>
void Print_arr(int * p , int SIZE){
	if(SIZE - 1 < 0){
		return;
	}
	Print_arr(p ,SIZE - 1);
	printf("%d "  , p[SIZE - 1]);
}
