#include "mystring.h"

/**
    This function will return length of the string
**/
size_t mystrlen(const char *str)
{
    return strlen(str);
}

/**
    This function is used to copy the string into another
**/
char* mystrcpy(char* str1, const char* str2)
{
    return strcpy(str1,str2);
}

/**
    This function is used to concatinate the string into another
**/
char* mystrcat(char *str1, const char *str2)
{
    return strcat(str1,str2);
}

/**
    This function is used to compare the string into another
**/
int mystrcmp(const char *str1, const char *str2 )
{
    return strcmp(str1,str2);
}
