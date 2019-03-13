/* Generatorka   nr 3 - czêste bazary oddalone od sienie o 2 drogi
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - iloœæ miast
 */
#include <sowa/gen.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int seed;

vector<int> graf3[1000007];
int tab[1000007];


int main()
{

    int n,a,b;

    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);

    //scanf("%d", &n);
    printf("%d\n", n);

    graf3[1].push_back(2);
    graf3[1].push_back(3);

    for(int i=4;i<=n;i++)
    {
        if(n-i>1)
        {
            a=rand()%2;
            graf3[a+i-2].push_back(i);
            graf3[i].push_back(i+1);
            graf3[i].push_back(i+2);

            i+=2;
        }
        else
        {
            if(n-i>0)
            {
                a=rand()%2;
                graf3[a+i-2].push_back(i);
                graf3[a+i-2].push_back(i+1);
                i++;
            }
            else
            {
                if(n-i==0)
                {
                    a=rand()%2;
                    graf3[a+i-2].push_back(i);
                }
            }
        }


    }

    for(int i=1;i<=n;i++)
    {
        tab[i]=i;
    }

    random_shuffle(tab+1, tab+n+1);

    for(int i=n;i>0;i--)
    {
        for(int j=0;j<graf3[i].size();j++)
        {
            printf("%d %d\n", tab[i], tab[graf3[i][j]]);
        }
    }


    return 0;
}
