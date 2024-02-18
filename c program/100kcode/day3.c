// print  1 to 10
#include<stdio.h>
int main(){
    int i, n;
    for(i=1;i<=10;i++){
        printf("%d\n", i);
    }
}

// print a number sum
#include<stdio.h>
int main(){
    int i, n;
    int sum = 0;
    printf("enter a number ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum = sum + i;   
    }
    printf("the sum is %d\n", sum);
}

// print even numbers
#include<stdio.h>
int main(){
    int i, n;
    printf("enter a limit ");
    scanf("%d", &n);

    for(i=2;i<=n;i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
}

// print prime numbers
#include<stdio.h>                                                      
int main(){
    int num,i;
    int flag = 0;
    printf("enter a number ");
    scanf("%d", &num);
    
   for(i=2;i<num/2;i++){
    if(num%i==0){
         flag=1;
        break;
    }
   }
   if(flag==1){
    printf("%d not a prime number", num);
   }
   else{
    printf("%d is a prime number", num);
   }
}

//print *
#include<stdio.h>
int main(){
    int i, j, n;
    printf("ener the number of lines : \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++){
            printf("*");
        }printf("\n");
    }
}

//print * in decreasing order

#include<stdio.h>
int main(){
    int i, j, n;
    printf("enter the number of lines ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("*");
        }printf("\n");
    }
}
    
   
