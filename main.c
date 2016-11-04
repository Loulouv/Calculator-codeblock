#include <stdio.h>
#include <stdlib.h>

int addition(int,int);

int main()
{
    addition(1,4);
    printf("resultat %d\n", addition(1,4));
    return 0;
}

int addition(int a, int b)
{
    return a+b;
}
