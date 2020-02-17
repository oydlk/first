#include <stdio.h>
#include <math.h>

double Module(double x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}

int main()
{
    double x, eps;

    printf("x = ");
    
    scanf("%lf", &x);

    printf("eps = ");
    
    scanf("%lf", &eps);

    double res = 0;

    int i = 1;

    double func = 2 * (pow(x, i) / i);

    while (Module(func) >= eps)
    {
        res += func;
        i += 2;

        func = 2 * (pow(x, i) / i);

    }

    printf("res = %lf\n", res);
} 
