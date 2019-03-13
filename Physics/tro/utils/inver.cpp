#include <cstdio>
#include <sowa/oi.h>

template <class T> void ignore_result(T x){}

int q1,q2,Ep,mini=1e6*(-1),maxi=1e6;

int main()
{

	ignore_result(scanf("%d %d %d", &q1,&q2, &Ep));
	assert(q1>=mini && q1<=maxi && q2>=mini && q2<=maxi && Ep>=mini*1000 && Ep<=maxi*1000);
		
	printf("OK\n");
    return 0;
}
