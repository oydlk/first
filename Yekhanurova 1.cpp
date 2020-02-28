//
//  main.cpp
//  projcpp
//
//  Created by Ольга Еханурова on 2/23/20.
//  Copyright © 2020 Ольга Еханурова. All rights reserved.
//



// 312 а,б,в

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

double f1(double x)
{
    double res=(exp(x)-exp(-x))/(exp(x)+exp(-x));
    return res;
}

double f2(double x)
{
    double res=((pow((pow(x,2)+1),0.5)-1)/2)+x;
    return res;
}

double f3(double x)
{
    double res=x/(1+abs(x));
    return res;
}

int main()
{
    double x;
    cout<< "enter x   ";
    cin>>x;
    cout<< "th(x)="<<f1(x)<<endl;
    cout<< "f2(x)="<<f2(x)<<endl;
    cout<< "f3(x)="<<f3(x)<<endl;

}



//32 (2)
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void mixer(int x)
{
    int x100, x10, x1;
    x100=(x-x%100)/100;
    x1=x%10;
    x10=(x%100-x1)/10;
    cout<<x100<<x1<<x10<<endl;
    cout<<x10<<x100<<x1<<endl;
    cout<<x10<<x1<<x100<<endl;
    cout<<x1<<x10<<x100<<endl;
    cout<<x1<<x100<<x10<<endl;
}

int main()
{
    cout<< "введіть 3х значне число   ";
    int x;
    cin>>x;
    mixer(x);
    
}
 


//32 (9,ж)

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

double f(double a, double x)
{
    double res1=-(log(1-a*(x+a))/a);
    double res2=(exp(a*x)-1)/a+a;
    double res;
    if (a<0){
        res=res1;
    }
    if (a==0){
        res = x;
    }
    else{
        res=res2;
    }
    return res;
}

int main()
{
    cout<<"enter a   ";
    double a, x;
    cin>>a;
    cout<<"enter x    ";
    cin>>x;
    cout<<f(a,x)<<endl;
}

