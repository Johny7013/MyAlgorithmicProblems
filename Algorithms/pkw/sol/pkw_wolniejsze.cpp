#include <bits/stdc++.h>

using namespace std;

template <class T> void ignore_result(T x){}

bitset<1000007> odw;

int pierwsze[1000007];

bool p=false;

int main()
{
    long long a,b;

    int n,x;
    odw[1]=true;

    for(int i=2;i<=1000000;i++)
    {
        x=2;
        p=false;
        while(x<=sqrt(i))
        {
            if(i%x==0)
            {
                p=true;
                break;
            }
            x++;
        }
        if(p==true)
        {
            p=false;
            odw[i]=true;
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
