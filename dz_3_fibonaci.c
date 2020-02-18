#include <stdio.h>

unsigned int Fibonacci()
{
    unsigned int i;
    scanf("%d",&i);
    unsigned int a1 = 1;
    unsigned int a2 = 2;
    unsigned int res = 0;
    while (res<=i)
    {
        res = a1+a2;
        a1=a2;
        a2=res;

    }
    return a1;
}

int main()
{
    printf("%d", Fibonacci());
}



