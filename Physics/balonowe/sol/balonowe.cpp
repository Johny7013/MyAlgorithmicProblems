#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define scanf(arg...) (scanf(arg)?:0)

using namespace std;

int main()
{
    long double t, v, g=9.81, wynik;
    cin>>t>>v;
    v=v/3.6;
    wynik=sqrt(v*(2*t*g+v)/(g*g))+v/g;
    cout<<fixed;
    cout.precision(3);
    cout<<wynik;

    return 0;
}
