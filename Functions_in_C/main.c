#include <stdio.h>

int sum(int , int);
void simple(int);
int Power(int , int);
void Reverse_Arr(int* , int const);
int Second_Max(int const , int*);
float CelsiusToFahrenheit(float );
void IsAlpha(char);
int Factory(int);
int SumDigit(int);
int NumReverse(int);

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
	printf("The maximum second number is %d\n\n" , Second_Max(size , arr));

//Celsius To Fahrenheit
	printf("	Celsius To Fahrenheit");
	float c = 0;
	printf("Enter temperature(C):");
	scanf("%f" , &c);
	printf("%2fC To Fahrenheit is %2f:\n\n" , c ,CelsiusToFahrenheit(c));
	
//isalpha
	printf("	ISALPHA:\n");
	char ch = '\0';
	printf("Enter the character:");
	scanf(" %c" , &ch);
	IsAlpha(ch);
	printf("\n\n");

//FACTORY
	printf("        FACTORY:\n");
	int factory_num = 0;
	do{
		printf("Enter the number(>0):");
		scanf("%d" , &factory_num);
	}while(factory_num < 1);
	printf("The result of factory is %d\n\n" , Factory(factory_num));

//SUM OF DIGITS
	printf("	SumDigit\n");
	int num_for_sum_digit = 0;
	printf("Enter the number:");
	scanf("%d" , &num_for_sum_digit);
	printf("The numbers digits sum is %d\n\n" , SumDigit(num_for_sum_digit));
	
//NUMBER REVERSE
	printf("        NumReverse\n");
	int num_for_reverse = 0;
	printf("Enter the number:");
	scanf("%d" , &num_for_reverse);
	printf("The reverse numbers result is:%d\n\n", NumReverse(num_for_reverse));


return 0;
}
