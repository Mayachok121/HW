#include <stdio.h>

int main()
{
	int num, sum=0;
	scanf ("%d", &num);
	{
		do 
        {
            sum+=num%10;
            num=num/10;
        }
        while (num!=0);
        if (sum==10) printf ("YES");
        else printf ("NO");
		
	}
	
	return 0;
}