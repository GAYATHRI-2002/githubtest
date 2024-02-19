
// input values to arrays
#include<stdio.h>
int main()
{
    int limit, i, n;
    int a[120];
    printf("enter array limit: ");
    scanf("%d", &limit);
    printf("enter values");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d", &a[i]);
        
    }
    printf("entered valus are : ");
    for(i=0;i<limit;i++){
    printf(" %d", a[i]);
    }
}
