#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    scanf("%f", &x);
    for(int i =0;i<6;i++)
    {
        x*=x;
    }
    printf("%f", x);
}
