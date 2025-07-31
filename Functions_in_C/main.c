#include <stdio.h>

int sum(int , int);
void simple(int);
int Power(int , int);
void Reverse_Arr(int* , int const);
int Second_Max(int const , int*);
int main(){

//SUM:
	printf("	SUM\n");
	int a = 0;
	int b = 0;
	printf("Enter the firs number:");
	scanf("%d" , &a);
	printf("Enter the second one:");
	scanf("%d" , &b);
	printf("Sum is %d\n\n" , sum(a , b));

//SIMPLE
	printf("        SIMPLE\n");
	int num = 0;
	do{
		printf("Enter the number:");
		scanf("%d" , &num);
	}while(num < 1);
	simple(num);
	printf("\n\n");

//POWER
	printf("        POWER\n");
	int num_power = 0;
	int power = 0;

	do{
		printf("Enter the number:");
		scanf("%d" , &num_power);
	}while(num_power < 1);

	do{
		printf("Enter the power:");
		scanf("%d" , &power);
	}while(power < 0);
	printf("The %d^%d is %d\n\n" , num_power , power , Power(num_power , power));
	
//Reverse_ARR
	printf("        Reverse_Arr\n");
	int const size = 6;
	int arr[size] = {};
	
	printf("Enter the arr[%d] numbers:\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , (arr + i));
	}
	printf("The result is:\n");
	Reverse_Arr(arr , size);
	printf("\n\n");

//SECOND MAXIMUM IN ARR
	printf("        Second_Max(Let's use the previous array.)\n");
	printf("The maximum second number is %d\n" , Second_Max(size , arr));

return 0;
}
