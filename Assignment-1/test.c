#include <stdio.h>
#include "mystring.c"
#include "myutils.c"


int main()
{
  char str[]="Bablu";
  int prime=15, palindrome=313, factorial=10;
  

  printf("Length of the string is %lu\n ",mystrlen(str));
  
  if(isPrime(prime))
      printf("The number is PRIME\n");
  
  if(isPalindrome(palindrome))
      printf("The number is PALINDROME\n");

  printf("Factorial of %d is %d \n",factorial,factorial(factorial));
  return 0;
}
