#include <stdio.h>

void IsAlpha(char c){
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
		printf("True");
	}
	else{
		printf("False");
	}
}
