#include <stdio.h>

int main()
{
	int num1, num2;
	scanf ("%d %d", &num1, &num2);
	while ((num1!=0) && (num2!=0))
	{
		if (num1>num2) num1=num1%num2;
		else num2=num2%num1;
		
	}
	printf ("%d", num1+num2);
	return 0;
}