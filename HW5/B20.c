#include <stdio.h>

int main()
{
	int num, i, k=0;
	scanf ("%d", &num);
	{
		for (i=1; i<=num; i++) 
        {
            if ((num%i)==0) k++;
        }
        if (k==2) printf ("YES");
        else printf ("NO");
		
	}
	
	return 0;
}