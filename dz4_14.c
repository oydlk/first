#include <stdio.h>
#include <cmath.h>
using namespace std;
 
int main()
{
    unsigned long long n;
  printf("n = ");
  
  scanf("%lf",&n);
    
    for (unsigned long long i = 2; i < sqrt(n)+0.00001; )    {
        if ( n % i == 0 ){
            printf(" %lf", &i);
            n /= i;
        }
        else{
            ++i;
        }
    }
    if ( n > 1 )
        printf("%lf", n);
    return 0;
}
