#include <iostream>
#include <cstdio>

using namespace std;

//szablon funkcji, ktory pozwala na poradzenie sobie z warningami od
//funkcji zadeklarowanych z warn_unused_result (np. scanf).
//Przykladowe uzycie: ignore_result(scanf("%d",&n))
template <class T> void ignore_result(T x){}

int main()
{
    int r=1,n;

	ignore_result(scanf("%d %d", &r, &n));


    while(r>0)
    {
        r=2*r*(n-1);

        printf("%d\n",r);

	ignore_result(scanf("%d %d", &r, &n));
    }





    return 0;
}
