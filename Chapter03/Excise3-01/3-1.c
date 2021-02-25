#include <stdio.h>

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else    /* 找到了匹配的值 */
			return mid;
	}
	return -1;  /* 没有匹配的值 */
}

/* 没有多大的性能改进，反而失掉了代码的可读性 */
int binsearch2(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while (low <= high && x != v[mid])
	{
		if (low < v[mid])
			high = mid - 1;
		else
			high = mid + 1;
		mid = (low + high) / 2;
	}
	if (x == v[mid])
		return mid;   /* found match */
	else
		return -1;    /* no match */
}

main()
{
	int v[] = { 1,2,3,4,5,6,7,8,9 };
	int result = binsearch(5, v, sizeof(v));
	printf("%d", result);

	getchar();
	return 0;
}