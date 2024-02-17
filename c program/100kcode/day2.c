// positive or negative
#include<stdio.h>

int main(){
    int num1, num2;
    printf("enter a number:");
    scanf("%d", &num1);

    if(num1 > 0){
        printf("the number %d is positive", num1);
    }
    else{
        printf("It is not positive");
    }
}

//Arithmatic operations
#include<stdio.h>

int main(){
    int num1, num2, choice,result;
    printf("enter two numbers:");
    scanf("%d%d", &num1, &num2);
    printf("Enter your choice [1]add, [2]sub, [3]mul, [4]div\n");
    scanf("%d", &choice);

    if(choice==1){
        result = num1+num2;
        printf("result: %d", result);
    }
    else if(choice==2){
        result = num1 -num2;
        printf("result: %d", result);
    }
    else if(choice==3){
        result = num1 * num2;
        printf("result: %d", result);
    }
    else if(choice==4){
        result = num1/num2;
        printf("result: %d", result);
    }
    else{
        printf("Fool!!!!!");
    }

    
}

/// switch statements
#include<stdio.h>
int main(){
    int choice;
    printf("enter your choices for breakfast.\n[1]milk\n[2]bread\n[3]biscut\n[4]fruit salad\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
            printf("you choose milk"); 
            break;
    case 2:
            printf("you choose bread"); 
            break;
    case 3:
            printf("you choose biscut"); 
            break;
    case 4:
            printf("you choose fruit salad"); 
            break;
    default:
        printf("fool!!!!!");
    }
    

}
