#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0, r = 0, t = 0;
	scanf("%d%d%d%d", &q, &w, &e, &r);
	t = (q + w - e) * r;
	printf("%d\n", t);
	return 0;
}