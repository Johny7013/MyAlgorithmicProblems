#include <cstdio>
#include <sowa/oi.h>

template <class T> void ignore_result(T x){}

int n, m, f,a,b,c,d,e;

int main()
{
	
	ignore_result(scanf("%d %d %d", &n, &m, &f));

	assert(1<=n && n<=100);
	assert(100<=m && m<=250);
	assert(100<=f && f<=1000);

	for(int i=1;i<=n;i++)
	{
		ignore_result(scanf("%d %d %d %d %d", &a, &b, &c, &d, &e));
		assert(1<=a && a<=10);
		assert(0<=b && b<=1000);
		assert(0<=c && c<=1000);
		assert(0<=d && d<=1000);
		assert(0<=e && e<=1000);

	}

    printf("OK\n");
    return 0;
}
