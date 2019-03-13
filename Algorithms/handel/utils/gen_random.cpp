/* Generatorka   nr 1 - Full Random
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - ilość miast
 */
#include <sowa/gen.h>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int seed;

vector<int> graf1[1000007];
int tab[1000007];


int main()
{

    int n,a,b;

    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);

    //scanf("%d", &n);
    printf("%d\n", n);

    graf1[1].push_back(2);
    graf1[1].push_back(3);
    graf1[1].push_back(4);
    graf1[3].push_back(5);
    graf1[3].push_back(6);

    for(int i=7;i<=n;i++)
    {
        a=rand()%(i - 1);
	a++;
        graf1[a].push_back(i);
       // printf("%d %d\n", a, i);

    }

    //printf("\n");

    for(int i=1;i<=n;i++)
    {
        tab[i]=i;
    }

    random_shuffle(tab+1, tab+n+1);

    for(int i=n;i>0;i--)
    {
        for(int j=0;j<graf1[i].size();j++)
        {
            //cout<<tab[i]<<" "<<tab[graf1[i][j]]<<endl;
            printf("%d %d\n", tab[i], tab[graf1[i][j]]);
        }
    }

    return 0;
}
