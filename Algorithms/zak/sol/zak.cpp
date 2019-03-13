#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

//szablon funkcji, ktory pozwala na poradzenie sobie z warningami od
//funkcji zadeklarowanych z warn_unused_result (np. scanf).
//Przykladowe uzycie: ignore_result(scanf("%d",&n))
template <class T> void ignore_result(T x){}

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    int n;
    double a,pierwiastek;
    pierwiastek=sqrt(3);

    ignore_result(scanf("%d", &n));


	cout<<fixed;
    	cout.precision(3);
   

     //cout<<pierwiastek<<endl;

    for(int i=1;i<=n;i++)
    {
        ignore_result(scanf("%lf", &a));

        a=a*pierwiastek/2;

	 
        cout<<a<<endl;
    }

    return 0;
}
