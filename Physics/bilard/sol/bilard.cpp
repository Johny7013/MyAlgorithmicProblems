#include<iostream>
#include<cmath>
#define scanf(arg...) (scanf(arg)?:0)

using namespace std;

int main()
{
    long double v0,f,s1,s2,vp;
    cin >> v0 >> f >> s1 >> s2;

    vp=sqrt(19.62*f*(s1+s2/0.7));

    if(v0>=vp)
        cout << "TAK";
    else
    {
        cout << "NIE ";
        cout << fixed;
        cout.precision(3);
        cout << vp;
    }

    return 0;
}
