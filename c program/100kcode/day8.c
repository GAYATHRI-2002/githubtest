//functions without argument and without return value
#include<stdio.h>
#include<stdlib.h>
void sum();

int main(){
    
    sum();

    }
    
void sum(){
    int num1, num2, sum;

    printf("Enter two values: ");
    scanf("%d %d", &num1, &num2);
    sum = num1+num2;
    printf("The sum is: %d", sum);
}
   
    
