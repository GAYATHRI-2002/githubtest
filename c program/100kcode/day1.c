#include<stdio.h>
#include<stdlib.h>
int main()
{
     printf("Hello World");
     int a, b, sum;
     printf("enter a number: ");
     scanf("%d", &a);
     printf("you have entered %d number\n" , a);
     printf("enter a number: ");
     scanf("%d", &b);
     printf("you have entered %d number\n" , b);
     sum = a + b;
     printf("the sum is : %d", sum);
    float a, b, c, average;
    printf("enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    average = (a+b+c)/3;
    printf("the average is:%f " , average);
    return 0;
}
