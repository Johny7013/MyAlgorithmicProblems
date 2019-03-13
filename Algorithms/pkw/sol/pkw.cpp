#include <iostream>
#include <cstdio>
#include <cmath>
#include <bitset>
using namespace std;

template <class T> void ignore_result(T x){}

bitset<1000007> odw;

int pierwsze[1000007];

int main()
{
    long long a,b,c;

    int n,x;
    odw[1]=true;

    for(int i=2;i<=1000;i++)
    {
        if(odw[i]==false)
        {
            x=2*i;
            while(x<1000001)
            {
                odw[x]=true;
                x+=i;
            }
        }
    }

    for(int i=1;i<=1000000;i++)
    {

        pierwsze[i]=pierwsze[i-1];

        if(odw[i]==false)
        {
            pierwsze[i]++;
        }
    }

    ignore_result(scanf("%d", &n));


    for(int i=1;i<=n;i++)
    {
        ignore_result(scanf("%lld %lld", &a, &b));

        a=ceil(sqrt(a));
        b=sqrt(b);

        x=pierwsze[b]-pierwsze[a-1];

        printf("%d\n", x);
    }



    return 0;
}
