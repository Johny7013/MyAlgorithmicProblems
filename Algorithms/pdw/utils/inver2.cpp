#include <iostream>
#include <cstdio>
#include <sowa/oi.h>

template <class T> void ignore_result(T x){}

using namespace std;

pair<int, int> tab[305];

int g=-1;

int first(int x, int y)
{
    return tab[x].first-tab[y].first;
}

int second(int x, int y)
{
    return tab[x].second-tab[y].second;
}

bool wektor(int a, int b)
{
    int x1,y1,x2,y2,wynik1,wynik2;

    x1=first(a,b);
    y1=second(a,b);

    x2=first(a+1,b);
    y2=second(a+1,b);

    wynik1=x1*y2-x2*y1;

    x1=first(a,b+1);
    y1=second(a,b+1);

    x2=first(a+1,b+1);
    y2=second(a+1,b+1);

    wynik2=x1*y2-x2*y1;
    //cout<<"jolo";

    if((wynik1<0 && wynik2<0) ||  (wynik1>0 && wynik2>0))
    {

       // cout<<a<<" "<<b<<endl;
        //cout<<wynik1<<" "<<wynik2<<endl;
        return true;
    }
    else
    {
        if(wynik1==0 || wynik2==0)
        {
            if(wynik1==0)
            {
                if((tab[b].first>min(tab[a].first, tab[a+1].first)) && ((tab[b].first<max(tab[a].first, tab[a+1].first))))
                {
                    cout<<"here1";
                    return false;
                }
            }
            if(wynik2==0)
            {
                if((tab[b+1].first>min(tab[a].first, tab[a+1].first)) && ((tab[b+1].first<max(tab[a].first, tab[a+1].first))))
                {
                    cout<<"here2";
                    return false;
                }
            }
        }


        x1=first(b,a);
        y1=second(b,a);

        x2=first(b+1,a);
        y2=second(b+1,a);

        wynik1=x1*y2-x2*y1;

        x1=first(b,a+1);
        y1=second(b,a+1);

        x2=first(b+1,a+1);
        y2=second(b+1,a+1);

        wynik2=x1*y2-x2*y1;

        if((wynik1<0 && wynik2<0) ||  (wynik1>0 && wynik2>0))
        {

            //cout<<a<<" "<<b<<endl;
            //cout<<wynik1<<" "<<wynik2<<endl;
            return true;
        }
        else
        {




        if(wynik1==0 || wynik2==0)
        {
            if(wynik1==0)
            {
                if((tab[a].first>min(tab[b].first, tab[b+1].first)) && ((tab[a].first<max(tab[b].first, tab[b+1].first))))
                {
                    cout<<"here1";
                    return false;
                }
            }
            if(wynik2==0)
            {
                if((tab[a+1].first>min(tab[b].first, tab[b+1].first)) && ((tab[a+1].first<max(tab[b].first, tab[b+1].first))))
                {
                    cout<<"here2";
                    return false;
                }
            }

            return true;
        }

        }

        cout<<"here";
        return false;




    }
}

int main()
{
    int n;

    ignore_result(scanf("%d", &n));

    assert(n>=4 && n<=300);

    for(int i=1;i<=n;i++)
    {
        ignore_result(scanf("%d %d", &tab[i].first, &tab[i].second));

        assert(tab[i].first>=-30000 && tab[i].first<=30000 && tab[i].second>=-30000 && tab[i].second<=30000);
    }

    tab[n+1]=tab[1];

    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(!(wektor(i,j) && wektor(j,i)))
            {
                printf("ZLE");
                cout<<i<<" "<<j<<endl;
            }
        }
    }



    printf("OK");




    return 0;
}
