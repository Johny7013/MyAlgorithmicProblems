/* Calkowicie losowa generatorka 3 argumentów z losowaniem znaku.
 * Argumenty:
 *      1) seed - ziarno generowania liczb pseudolosowych
 */ 

#include<sowa/gen.h>

int seed,a,b,c,d;

int main()
{
    mscanf("%d",&seed);
    dataRead();
    srand(seed);

	a=rand() % 1000000 + 1;
	
	d=rand()%2;
	if(d==0)
	a*=-1;

	b=rand() % 1000000 + 1;
	
	d=rand()%2;
	if(d==0)
	b*=-1;	

	c=rand() % 10000000 + 1;

	d=rand()%2;
	if(d==0)
	c*=-1;


	
	printf("%d %d %d\n", a, b, c);
}
