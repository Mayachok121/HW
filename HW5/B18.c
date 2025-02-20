#include <stdio.h>

int main()
{
	int kol, num1=1, num2=1, sum;
	scanf ("%d", &kol);
	if (kol==1) printf ("1 ");
	else
	{
	    printf ("1 1 ");
	    for (int i=3; i<=kol;i++)
	    {
		    sum=num1+num2;
		    num1=num2;
		    num2=sum;
		    
            printf ("%d ", sum);
		
	    }
	}
	return 0;
}