//Accept a char and display it.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char na;
    printf("enter a character: ");
    scanf("%c", &na);
    printf("the character you enterd is %c", na);
}

// Accept two inputs and display the sum
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num1;
   float num2, sum;

   printf("enter two  number: ");
   scanf("%d %f", &num1, &num2);
   sum = num1 + num2;
   printf("The sum is:%f", sum);

}

// find the simple interest
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int P;
   float R,n,SI;
   printf("FIND THE SIMPLE INTEREST\n");
   printf("enter the principle amount:\n");
   scanf("%d", &P);

   printf("enter the interst rate:\n");
   scanf("%f", &R);

   printf("enter the number of years:\n");
   scanf("%f", &n);

   SI = (P*R*n)/100;
  
   printf("The simple interest for%.2f years :%.2f ",n, SI);
}
