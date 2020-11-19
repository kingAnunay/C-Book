#include <stdio.h>

char name = 'L';
// char is variable type and "name" is the name of the variable,it is necessary to keep the name descriptive.
// we store single character in single ''
char characterName[] ="Hello";
// "characterName" is the variable name here however when we name a variable which stores string(words/multiple characters) we use [] square brackets
// we store words in double ""
int main(void) {
  printf("%s %c\n",characterName,name);
  // %s and %c is the format specifier. format specifier is like a placeholder for the variables we wanna use.
  // %s is the format specifier for strings 
  // %c is the format specifier for characters
  return 0;
}