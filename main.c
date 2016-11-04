#include <stdio.h>
#include <stdlib.h>

int addition(int,int);

int main()
{
    addition(1,4);
    printf("l'addition de a et de b vaut%d\n", addition(1,4));
    return 0;
}

int addition(int a, int b)
{
    return a+b;
}
