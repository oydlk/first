#include <stdio.h>

int main(){
    
    double t, t4, res;
    
    printf("Input t: \n");
    scanf("%lf",&t);
    
    t = t * t;
    t4 = t * t;
    t = t4 * t4;
    res = t * t * t * t4; //28 cтепень
    
    printf("%lf", res);
}