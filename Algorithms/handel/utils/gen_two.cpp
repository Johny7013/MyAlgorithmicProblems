/* Generatorka   nr 2 - losowe dodawanie dwóch dróg naraz
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 *		2) n - ilość miast
 */
#include <sowa/gen.h>
//#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int seed;

vector<int> graf2[1000007];
int tab2[1000007];


int main()
{

    int n,a,b;

    mscanf("%d %d", &seed, &n);
    dataRead();
    srand(seed);

    //scanf("%d", &n);
    printf("%d\n", n);

    graf2[1].push_back(2);
    graf2[1].push_back(3);
    graf2[1].push_back(4);
    graf2[3].push_back(5);
    graf2[3].push_back(6);

    for(int i=7;i<=n; i++)
    {
        a=rand()%(i - 1);
	a++;

        if(n-i>0)
        {
            graf2[a].push_back(i);
            
	    

            i++;
            graf2[a].push_back(i);


            //cout<<i+6<<"K K"<<i+7<<endl;

            /*cout<<a<<" "<<i-1<<endl;
            cout<<a<<" "<<i<<endl;*/


        }
        else
        {
          graf2[a].push_back(i);
          //cout<<a<<" "<<i<<endl;
        }




    }
   // cout<<endl;

    for(int i=1;i<=n;i++)
    {
        tab2[i]=i;
    }

    random_shuffle(tab2+1, tab2+n+1);

    for(int i=n;i>0;i--)
    {
        for(int j=0;j<graf2[i].size();j++)
        {
            printf("%d %d\n", tab2[i], tab2[graf2[i][j]]);
        }
    }


    return 0;
}
