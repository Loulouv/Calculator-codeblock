#include <stdio.h>
#include <stdlib.h>

int soustraction(int,int);

int main()
{
    soustraction(1, 4);
    printf("la soustraction de a et de b vaut%d\n", soustraction(1, 4));
    return 0;
}

int soustraction(int a, int b)
{
    return a-b;
}
