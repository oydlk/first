#include <stdio.h>
#include <math.h>
#define N 10

int main()
{
    double myArray[N] = {2,9,11,25,49,4,87,32,4,2,100};
    int counter = 0;
    for (int i = 0; i<N; i++)
    {
        if (myArray[i] == 4)
        {
            counter++;
        }
        else if (myArray[i]%2 == 0)
        {
            continue;
        }
        else if (sqrt(myArray[i])%2 == 0)
        {
            counter++;
        }
    }
    printf("%d", &counter);
}
