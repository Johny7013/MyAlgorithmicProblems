#include <bits/stdc++.h>

using namespace std;

template <class T> void ignore_result(T x){}

bitset<1000007> odw;

int main()
{
    long long a,b;

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

    ignore_result(scanf("%d", &n));


    for(int i=1;i<=n;i++)
    {
        ignore_result(scanf("%lld %lld", &a, &b));

        a=ceil(sqrt(a));
        b=sqrt(b);
        x=0;

        for(int i=a;i<=b;i++)
        {
            if(odw[i]==false)
            {
                x++;
            }
        }


        printf("%d\n", x);
    }



    return 0;
}
