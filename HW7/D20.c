#include <stdio.h>

int recurs_power(int n, int p)
{
    if (p==1) return n;
    p--;
    int num=n*recurs_power(n, p--);
    return num;
}

int main (void)
{
	int num1, num2;
	scanf ("%d %d", &num1, &num2);
	if (num2==0) printf ("1");
	else printf ("%d", recurs_power(num1, num2));
	return 0;
}