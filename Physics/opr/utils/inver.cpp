#include <cstdio>
#include <sowa/oi.h>

template <class T> void ignore_result(T x){}

int r=1,n;

int main()
{

	ignore_result(scanf("%d %d", &r,&n));

	while(r>0)
    	{
		assert(r>=1 && r<=30000 && n>=2 && n<=30000);

		ignore_result(scanf("%d %d", &r,&n));
		
	}
	printf("OK\n");
    return 0;
}
