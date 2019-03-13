#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    long double R=180000,cwz=449,t=0.02,c=4200,cp=2250000,mz,mw,q;
    cin>>mz>>mw;
    q=sqrt(2*(80*cwz*mz+mw*(c*80+cp))/(56*R));
    cout<<fixed;
    cout.precision(3);
    cout<<q;
    return 0;
}
