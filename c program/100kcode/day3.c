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
