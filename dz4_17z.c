#include <stdio.h>
#include <math.h>

double Abs(double x)
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

    double dy = 2 * (pow(x, i) / i);

    while (Abs(dy) >= eps)
    {
        res += dy;
        i += 2;

        dy = 2 * (pow(x, i) / i);

    }

    printf("res = %lf\n", res);
} 