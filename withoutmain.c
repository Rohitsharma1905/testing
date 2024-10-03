#include<stdio.h>
#include<stdlib.h>
int fun() // our custom main function
{
        return 0;
}
void _start()
{
    int x = fun(); //calling custom main function
    exit(x);
}
