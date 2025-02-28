#include <stdio.h>

int power (int num, int st)
{
    int znak=1, pr=1;
    if (num<0) 
    {
    znak=-1;
    num*=(-1);
    }
    for (int i=1; i<=st; i++)
    {
    pr=pr*num;
    }
    if ((st%2)==1) pr*=znak;
    return pr;
}
int main (void)
{
    int n, p;
    scanf ("%d %d", &n, &p);
    printf ("%d\n", power(n, p));
    return 0;
}