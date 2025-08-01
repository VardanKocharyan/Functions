#include <stdio.h>

void swap(int a , int b){
	a ^= b;
	b ^= a;
	a ^= b;
	printf("a = %d\nb = %d\n" , a , b);
}
