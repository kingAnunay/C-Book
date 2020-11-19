#include <stdio.h>

int main(){
  int year=2012;
  // int data types is basically whole numbers in C
  float f_weight=57.501;
  // float data type is the decimal number in C
  double d_weights=57.626;
  // double data type is more precise decimal number but also occupies the twice memory
  char grade = 'A';
  // char data type stores a character
  char name[]= "Light Yagami";
  // this is the kinda workaround in other languages string is also a data type. here what we are actually doing is creating array named "name[]" we will see that later. So this is the way to store a String in c.
  printf("%f\n%lf\n",f_weight,d_weights);
  // %f is format specifier for float
  // %lf is format specifier for double
  printf("%c\n",'A');
  // Here %c is the place holder for 'A' we can also put strings,character or numbers instead of variable.No point but can be done.
  printf("%c\n",grade);
  // %c is the placeholder for variable grade which is a char type.
  printf("%s\n",name);
  // %s is the placeholder for variable name which is an array but here we can see it as type string saying this won't be correct but for simplicity sake.
  return 0;
}