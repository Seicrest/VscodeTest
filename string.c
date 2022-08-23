#include <stdio.h>
#include "cs50.h"

int main()
{
    printf("hello world\r\n");
    string name =get_string("what is your name:");
    printf("My name is %s",name);
    return 0;
}