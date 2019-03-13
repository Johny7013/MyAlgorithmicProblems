#include <iostream>
#include <cstdio>
#define scanf(arg...) (scanf(arg)?:0)

using namespace std;

int main()
{
    long double r1,r2,r3,r4,r5,u,p,wynik;
    cin>>r1>>r2>>r3>>r4>>r5>>u>>p;

    wynik=(u*u*u*u)/(((r3*r4*r5)/(r3*r4+r4*r5+r3*r5)+(u*u)/p+r1+r2)*((r3*r4*r5)/(r3*r4+r4*r5+r3*r5)+(u*u)/p+r1+r2)*p);

    cout<<fixed;
    cout.precision(3);
    cout<<wynik;
    return 0;
}
