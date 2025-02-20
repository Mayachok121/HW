#include <stdio.h>

int main()
{
	int num, i=10, q, sum, pr;
	scanf ("%d", &num);
	for (i;i<=num;i++)
	{
		q=i;
		sum=0; pr=1;
		do 
        {
            sum+=q%10;
            pr*=q%10;
            q=q/10;
        }
        while (q!=0);
        if (sum==pr) printf ("%d ", i);
		
	}
	
	return 0;
}