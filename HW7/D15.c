#include <stdio.h>

int max_find(int max)
{
	int num;
	scanf("%d", &num);
	if (num==0) return max;
	if (num>max)
		max_find(num);
	else max_find(max);
}



int main (void)
{
	int num;
	scanf("%d", &num);
	printf ("%d", max_find(num));
	return 0;
}