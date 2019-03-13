#include <iostream>
#include <cstdio>

using namespace std;

template <class T>void ignore_result(T x){}

int main()
{
    int n,cwp=1020, ctl=333700;
    double dp=1.2,wynik,a,b,c;

    ignore_result(scanf("%d", &n));
    ignore_result(scanf("%lf %lf %lf", &a, &b, &c));

    wynik=n*ctl/(dp*(a/100)*(b/100)*(c/100)*cwp);

    printf("%.3lf", wynik);

    return 0;
}
