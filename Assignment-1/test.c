#include "mystring.c"
#include "myutils.c"
#include <stdio.h>


int main() {
  char str[]="Bablu";
  int prime=15, palindrome=313, fact=10, num=7, k=1;
  

  printf("Length of the string is %lu\n ",mystrlen(s));
  
  if(isPrime(prime))
      printf("The number is PRIME\n");
  
  if(isPalindrome(palindrome))
      printf("The number is PALINDROME\n");

  printf("factorial of %d is %d \n",fact,factorial(fact));
  return 0;
}