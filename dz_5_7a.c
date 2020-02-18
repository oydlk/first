#include <stdio.h>
#define N 10
int main()
{
    float myArray[N] = {1,2,3,5,4,6,7,9,8,10};
    float result = 0;
    for (int i=0; i<N; i++)
    {
        result += myArray[i];
    }
    result = result/N;
    printf("%f", &result);

}

