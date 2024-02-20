// input values to arrays and output its value
#include<stdio.h>
int main()
{
    int i,n;
    int a[24];

    printf("enter the array size: ");
    scanf("%d", &n);

    printf("enter the array: ");
    for(i=0;i<n;i++){
         scanf("%d", &a[i]);
    }
   
  int sum = 0;
  for(i=0;i<n;i++){
    sum = sum + a[i];
   
  }
  printf("the array sum is:%d ", sum);

}

// input values to arrays and fint an item in the array
#include<stdio.h>
int main(){
    int limit, i, a[14], flag = 0;
    int search;

    printf("enter the array limit: ");
    scanf("%d", &limit);

    printf("enter the array : ");
    for ( i = 0; i < limit; i++){
        scanf("%d", &a[i]);
    }
   

    printf("The array: ");
    for ( i = 0; i < limit; i++){
        printf(" %d\n", a[i]);
    }
     printf("\n");

   
   printf("enter the search key: \n");
   scanf("%d", &search);

    for ( i = 0; i < limit; i++) {
     if (search==a[i]) {
        flag = 1;
        break;
        }else{
             flag= 0;  
        }
    }

    if(flag == 1){
        printf(" the item found at %d", i+1);
    }
    else{
        printf("not found");
    }
   
}
