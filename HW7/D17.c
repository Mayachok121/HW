#include <stdio.h>

int akkerman(int m, int n)
{
    /*A(0,m)=m+1
    A(n+1,0)=A(n,1)
    A(n+1,m+1)=A(n,A(n+1,m))*/
    if (m==0) return n+1;
    else if (n==0) akkerman(m-1, 1);
    else akkerman(m-1, akkerman(m,n-1));
}




int main (void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf ("%d", akkerman(num1, num2));
	return 0;
}