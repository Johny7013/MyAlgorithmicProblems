#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define scanf(arg...) (scanf(arg)?:0)


int main()
{

    long double Eo=8.85,q1,q2,Ep,k,a=0.2,b=0.3,c,d;

    Eo*=(long double)1e-12;

    long double eps=1e-16,eps2=1e-15,odw=1e12;

    //int liczba=1e6*(-1);
    //cout<<liczba;

   /* cout<<fixed;
    cout.precision(16);

    cout<<Eo;*/

    cin>>q1>>q2>>Ep;

    q1*=eps2;
    q2*=eps2;
    Ep*=eps;

    k=1/(4*M_PI*Eo);


    c=Ep/k-q1*q2/a;

    d=q1/sqrt(a*a+b*b)+q2/b;



    cout<<fixed;
    cout.precision(2);
    cout<<c/d*odw;


    return 0;
}
