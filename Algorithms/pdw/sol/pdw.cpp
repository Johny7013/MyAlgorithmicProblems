#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
//szablon funkcji, ktory pozwala na poradzenie sobie z warningami od
//funkcji zadeklarowanych z warn_unused_result (np. scanf).
//Przykladowe uzycie: ignore_result(scanf("%d",&n))
template <class T> void ignore_result(T x){}

pair<int, int> tab[305];

int main()
{
    int n;
    long long wynik=0;
    long double x;

    ignore_result(scanf("%d", &n));

    for(int i=1;i<=n;i++)
    {
        ignore_result(scanf("%d %d", &tab[i].first, &tab[i].second));
    }

    for(int i=1;i<n;i++)
    {
        wynik+=(tab[i].first*tab[i+1].second-tab[i+1].first*tab[i].second);
    }

    wynik+=(tab[n].first*tab[1].second-tab[1].first*tab[n].second);

    wynik=abs(wynik);

    x=((double)wynik)/2;

    cout<<fixed;
    cout.precision(2);
    cout<<x;

    return 0;
}
