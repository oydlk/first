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
double Checker(double x, double a){
    int res;
    if (x<0){
        return res = Counter1(x,a);
    }
    else {
        return res = Counter2(x);
    }
}
int main(){
    double x, a,ch;
    
    printf("x= ");
    
    scanf("%lf",&x);
    
    printf("a= ");
    
    scanf("%lf",&a);
    
    ch = Checker(x,a)
    
    printf("f = %le", ch);
}
