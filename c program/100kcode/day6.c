// selection sort
#include<stdio.h>
int main(){
    int i, j, a[20], n, temp;

    printf("enter the array size:");
    scanf("%d", &n);

    printf("enter the array : ");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("the array :");
    for ( i = 0; i < n; i++){
        printf(" %d", a[i]);
    }

    for ( i = 0; i < n-1; i++){
        for ( j = i+1; j < n; j++) {
            if(a[i]>a[j]){
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
                }
            }
        
    }

    printf("\nthe sorted array : ");
    for ( i = 0; i < n; i++){
      printf(" %d", a[i]);  
    }
    
}


// enter a name
#include<stdio.h>
int main(){
    
    char name[20];

    printf("enter a name: ");
    scanf("%s", name);

    printf("the name is %s", name);

    
}
