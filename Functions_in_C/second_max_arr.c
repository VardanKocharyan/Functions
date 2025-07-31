#include <stdio.h>
#include <limits.h>

int Second_Max(int const size , int arr[size]){
	int max = INT_MIN;
	int sec_max = INT_MIN;

	for(int i = 0 ; i < size ; ++i){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	for(int i = 0 ; i < size ; ++i){
		if(sec_max < arr[i] && arr[i] != max){
			sec_max = arr[i];
		}
	}
	return sec_max;
}
