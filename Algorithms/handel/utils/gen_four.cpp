/* Generatorka   nr 4 - d³ugi ci¹g, tylko 2 punkty handlowe w 2/5 drzewa i w 4/5 drzewa.
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

vector<int> graf4[1000007];
int tab[1000007];


int main()
{

    int n,a,b;

    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);

    //scanf("%d", &n);
    printf("%d\n", n);

    graf4[1].push_back(2);
    a=n*2/5;
    b=n*4/5;

    for(int i=3;i<=n;i++)
    {
        graf4[i-1].push_back(i);
        if(i==a)
        {
            graf4[i-1].push_back(i+1);
            i++;
        }
        if(i==b)
        {
            graf4[i-1].push_back(i+1);
            i++;
        }


    }

    for(int i=1;i<=n;i++)
    {
        tab[i]=i;
    }

    random_shuffle(tab+1, tab+n+1);


    for(int i=n;i>0;i--)
    {
        for(int j=0;j<graf4[i].size();j++)
        {
            printf("%d %d\n", tab[i], tab[graf4[i][j]]);
        }
    }


    return 0;
}
