#include <stdio.h>
int* Double_Arr_Values(int* , int const);
void Print_Arr(int * , const int);
void swap(int , int);
int Even(int* , const int);

int main(){

//Multiply All Elements by 2
	printf("	Multiply All Arr Elements by 2:\n");
	const int size = 5;
	int arr[size] = {};

	printf("Enter arr[%d] numbers:\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , (arr + i));
	}
	int *ptr = Double_Arr_Values(arr , size);
	Print_Arr(ptr , size);
	printf("\n");

//SWAP
	printf("	SWAP:\n");
	int a = 0;
	int b = 0;
	printf("a = ");
	scanf("%d" , &a);
	printf("b = ");
	scanf("%d" , &b);
	printf("Swaping\n");
	swap(a , b);
	printf("\n");

//Even
	printf("        EVEN\n");
	const int size_even = 5;
	int arr_even[size] = {};
	printf("Enter arr_even[%d] numbers:\n" , size_even);
	for(int i = 0 ; i < size_even ; ++i){
		printf("arr_even[%d] = " , i);
		scanf("%d" , (arr_even + i));
	}
	printf("Even numbers qount is %d\n\n" , Even(arr_even , size));

return 0;
}
	
