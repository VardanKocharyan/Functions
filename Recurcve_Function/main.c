#include <stdio.h>
#define SIZE 5

int fibonacci(int );
int fibonacci_rec(int index);
int Mul_digits(int);
void print_N_to_null(int);
void print_null_to_N(int);
void Print_arr(int* , int);
void Print_reverse_arr(int * , int);
int Add_numbers_digits(int n);
void binary(int);
char Firs_big_letter(char *);

int main(){

//FIBONACCI
	printf("	FIBONACCI\n");
	int n = 0;
	do{
		printf("Enter the fibonacci index:(>0)");
		scanf("%d" , &n);
	}while(n < 0);

	printf("fibonacci = %d\n" , fibonacci(n));
	printf("fibonacci_recursive = %d\n\n" ,fibonacci_rec(n) );

//MUL DIGITS
	printf("	MULL DIGITS\n");
	int number = 0;
	do{
		printf("Enter the number:(>0)");
		scanf("%d" , &number);
	}while(number < 0);

	printf("Mul of numbers digits is %d:\n\n" , Mul_digits(number));
//PRINT numbers N to 0
	printf("	Print N-0:\n");
	int a = 0;
	do{
		printf("Enter the number:(>0)");
		scanf("%d" , &a);
	}while(a < 0);
	print_N_to_null(a);
	printf("\n\n");

//PRINT numbers 0 to N
	printf("        Print 0-N:\n");
	int b = 0;
	do{
		printf("Enter the number:(>0)");
		scanf("%d" , &b);
	}while(b < 0);
	print_null_to_N(b);
	printf("\n\n");

//PRINT ARR IN ORDER
	printf("	Print arr[%d] in order\n" , SIZE);
	int arr[SIZE] = {};
	for(int i = 0 ; i < SIZE ; ++i){
		printf("arr[%d] = " , i);
		scanf("%d" , &arr[i]);
	}
	Print_arr(arr , SIZE);
	printf("\n\n");

//PRINT ARR IN REVERSE
	printf("        Print arr_rev[%d] in reverse\n" , SIZE);
	int arr_rev[SIZE] = {};
	for(int i = 0 ; i < SIZE ; ++i){
		printf("arr_rev[%d] = " , i);
		scanf("%d" , &arr_rev[i]);
	}
	Print_reverse_arr(arr , SIZE);
	printf("\n\n");

//ADD DIGITS
        printf("        ADD DIGITS\n");
        int add_num = 0;
        do{
                printf("Enter the number:(>0)");
                scanf("%d" , &add_num);
        }while(add_num < 0);

        printf("Add of numbers digits is %d:\n\n" , Add_numbers_digits(add_num));

//BINARY
	printf("        BINARY\n");
	int binary_num = 0;
	int sum = 0;
	printf("Enter the number:");
	scanf("%d" , &binary_num);
	if(binary_num < 0){
		sum = 1;
	}
	for(int i = 0 ; i < 5 ; ++i){
		printf("%d" , sum);
	}
	binary(binary_num);
	printf("\n\n");

//Firs_big_letter
	printf("	Firs big letter\n");
	const int size = 5;
	char crr[size] = {};
	printf("Enter crr[%d] letters\n" , size);
	for(int i = 0 ; i < size ; ++i){
		printf("crr[%d] = " , i);
		scanf(" %c" , (crr + i));
	}
	printf("The result is %c\n\n" , Firs_big_letter(crr));


return 0;
}
