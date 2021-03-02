#include "myutils.h"

/**
  This function is to give factorial of a given number
**/
int factorial(int m)
{
  if (m == 0) 
    return 1;
  else
    return (m*factorial(m-1));
}


/**
  This function is to give whether the given number is prime or not
**/
int isPrime(int num)
{
   int num2;
   for (num2 = 2; num2 <= num-1; num2++)
   { 
      if (num % num2 == 0)
        return 0;
   }
   return 1;
}
 

/**
  This function is to give whether the given number is palindrome or not
**/
int isPalindrome(int n)
{
    int rev,sum=0,temp;
    temp=n;
    while(n>0)    
    {    
        rev = n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
       return 1; 
    else     
       return 0;  

}
