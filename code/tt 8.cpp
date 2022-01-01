#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n; scanf("%d", &n);
    bool ada=false;
    while(n--)
    {
		int a, b; scanf("%d%d", &a, &b);
		if(a!=b) ada=true;
	}
	if(ada) printf("Happy Alex\n");
	else printf("Poor Alex\n");
	return 0;
}
