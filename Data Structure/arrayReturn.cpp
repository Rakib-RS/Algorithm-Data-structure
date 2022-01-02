#include <stdio.h>

int* fun(int x)
{
int arr[100];

	/* Some operations on arr[] */
	arr[0] = 10+x;
	arr[1] = 20+x;

	return arr;
}

int main()
{
	int* ptr = fun(10);
	int* pt = fun(100);
	printf("%d %d", ptr[0], ptr[1]);
	printf("\n %d %d", pt[0], pt[1]);
	return 0;
}
