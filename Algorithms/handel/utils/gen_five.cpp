/* Generatorka   nr 5 - bardzo du¿o punktów handlowych
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - ilosc miast
 */
#include <sowa/gen.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int seed;

vector<int> graf5[1000007];
int tab[1000007];


int main()
{

    int n,a,b;

    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);

    printf("%d\n", n);

    graf5[1].push_back(2);
    graf5[1].push_back(3);
    graf5[4].push_back(1);

    for(int i=5;i<=n;i++)
    {
        if(n-i>0)
        {
            a=rand()%2;
            graf5[a+i-2].push_back(i);
            graf5[a+i-2].push_back(i+1);
            i++;
        }
        else
        {
                a=rand()%2;
                graf5[a+i-2].push_back(i);
        }
    }



    for(int i=1;i<=n;i++)
    {
        tab[i]=i;
    }

    random_shuffle(tab+1, tab+n+1);


    for(int i=n;i>0;i--)
    {
        for(int j=0;j<graf5[i].size();j++)
        {
            printf("%d %d\n", tab[i], tab[graf5[i][j]]);
        }
    }


    return 0;
}
