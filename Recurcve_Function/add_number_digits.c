#include <stdio.h>

int Add_numbers_digits(int n){

        if(n < 10){
                return n;
        }
        return (n % 10) * Add_numbers_digits(n / 10);
}

