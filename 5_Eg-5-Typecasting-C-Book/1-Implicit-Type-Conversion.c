#include<stdio.h>

int main(){
    // When the type conversion is performed automatically by the compiler without programmers intervention, such type of conversion is known as implicit type conversion or type promotion.

    int num=33;
    printf("This is %c",num);

    // here num is an int type but %c prints the ascii character equivalent to 33 which is !


  return 0;
}