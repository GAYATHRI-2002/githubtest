#include<stdio.h>
#include<stdbool.h>
int main(){

    char a = 'C'; // single character
    char d[] = "bro" ; // array of character

    bool e = true;
    printf("%d\n", e); // the answer will be 1 for true

    bool ed = false;
    printf("%d\n", ed); // the answer will be 0 for false

    char f = 100;
    printf("%d\n",f);
    printf("%c\n",f);
    unsigned char g = 255 ;
    printf("%d\n", g);

    int j = 2147483647;
    unsigned int k = 4294967295;
    printf("%d\n", j);
    printf("%u", k);

}
