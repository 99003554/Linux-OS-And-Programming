#ifndef __MYSTRING_H
#define __MYSTRING_H

#include <cstring>
#include <iostream>

int mystrlen(std::string str);
std::string mystrcpy(std::string, std::string);
std::string mystrcat(std::string, std::string);
bool mystrcmp(std::string, std::string);

#endif