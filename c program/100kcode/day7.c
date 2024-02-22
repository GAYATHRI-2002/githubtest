// multidimensional array
#include<stdio.h>
int main(){
   int value[3][3], i, j;

   printf("enter the value: ");

   for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
        scanf("%d", &value[i][j]);
    }
    
   }

   printf("the array is: \n");
    for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
        printf(" %d", value[i][j]);
    }
    printf("\n");
    
   }
       
}
