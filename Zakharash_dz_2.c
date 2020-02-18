#include <stdio.h>
#include <math.h>



double myfunction(double x)
{
    double result1;
    double result;
    double y1 = sin(x * M_PI / 180);
    double y2 = cos(x * M_PI / 180);
    result1 = y1/y2;
    result = 1/result1;
    return result;
}
int main()
{
    double x;
    scanf("%lf",&x);
    printf("%lf", myfunction(x));
}
