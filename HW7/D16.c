#include <stdio.h>

int is2pow(int n)
{
    if (n==1) return 1;
	if ((n%2)==0)
		is2pow(n/2);
	else return 0;
}


int main (void)
{
	int num;
	scanf("%d", &num);
	if (is2pow(num)==1) printf ("YES");
	else printf ("NO");
	return 0;
}