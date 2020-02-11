#include <stdio.h>
#include <math.h>

double Counter1(double x, double a){
    double f;
    f = x / (sqrt(1 + pow(x,2)*a));
    return f;
}
double Counter2(double x){
    double f;
    f = x;
    return f;
}
int main(){
    double x, a, res;
    
    printf("x= ");
    
    scanf("%lf",&x);
    
    printf("a= ");
    
    scanf("%lf",&a);
    
    res=0;
    
    if (x<0){
        res = Counter1(x,a);
    }
    else{
        res = Counter2(x);
    }

    printf("f = %le", res);
}