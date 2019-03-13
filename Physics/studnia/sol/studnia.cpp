#include <iostream>
#include <cstdio>
#include <cmath>
#define scanf(arg...) (scanf(arg)?:0)

using namespace std;

int main()
{
    long double h, g=9.81,wynik,v=340;
    cin>>h;
    wynik=sqrt(2*h/g)+(h+0.5)/v;
    cout<<fixed;
    cout.precision(3);
    cout<<wynik;
    return 0;
}
