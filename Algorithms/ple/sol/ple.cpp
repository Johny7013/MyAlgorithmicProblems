#include <cstdio>
#include <cmath>
#include <bitset>
#include <algorithm>
#include <iostream>

#define scanf(arg...) (scanf(arg)?:0)

//szablon funkcji, ktory pozwala na poradzenie sobie z warningami od
//funkcji zadeklarowanych z warn_unused_result (np. scanf).
//Przykladowe uzycie: ignore_result(scanf("%d",&n))
template <class T> void ignore_result(T x){}

using namespace std;



int main()
{
    int b,c,d,n,x,x1=0,b1=0,c1=0,d1=0,x2,b2,c2,d2;
    long double t1, tc=0, v, tab[107],a[107],m,f,a2;

    //ignore_result(scanf("%d", &n));
	cin>>n>>m>>f;

    for(int i=1;i<=n;i++)
    {
	cin>>a[i]>>x>>b>>c>>d;
        //ignore_result(scanf("%d %d %d %d", &x, &b, &c, &d));
	x2=x;
	b2=b;
	c2=c;
	d2=d;
	
	x=abs(x-x1);
	b=abs(b-b1);
	c=abs(c-c1);
	d=abs(d-d1);

	x1=x2;
	b1=b2;
	c1=c2;
	d1=d2;
	
        tab[i]=sqrt(x*x+b*b+c*c+d*d);
    }
    /*for(int i=1;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }*/

    a2=f/m;


    for(int i=1;i<=n;i++)
    {
        t1=sqrt(2*a2*tab[i]/(a[i]*a2+a[i]*a[i]));
        v=a[i]*t1;

        tc+=t1+v/a2;
    }

    cout<<fixed;
    cout.precision(3);
    cout<<tc;


    return 0;
}
