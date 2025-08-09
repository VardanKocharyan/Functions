#include <stdio.h>

char Firs_big_letter(char *p){
	if((*p == '\0') || (*p > 'A' && *p < 'Z')){
		return *p;
	}
	p++;
	Firs_big_letter(p);
}

