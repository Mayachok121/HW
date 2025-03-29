#include <stdio.h>

int acounter(void)
{
    char c=getchar();
    int k;
    if (c=='.') return 0;
    if (c=='a') k=1+acounter();
    else k=acounter();
    return k;
}

int main (void)
{
	printf ("%d", acounter());
	return 0;
}