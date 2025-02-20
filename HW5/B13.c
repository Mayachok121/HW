#include <stdio.h>

int main()
{
    int num, a=0,b=0;
    scanf ("%d", &num);
    while (num>0)
    {
    if ((num%2)==1) a++;
    else b++;
    num/=10;
    }
    printf ("%d %d", b, a);
    return 0;
}