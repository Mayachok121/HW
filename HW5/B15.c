#include <stdio.h>

int main()
{
	int num, a=0;
	do
	{
		scanf ("%d", &num);

		if (((num%2)==0) && (num!=0)) a++;
		
	}
    while (num!=0);
	printf ("%d", a);
	return 0;
}