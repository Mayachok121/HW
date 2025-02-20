#include <stdio.h>

int main()
{
    int num, a, i9=0;
    scanf ("%d", &num);
    while (num>0)
    {
        a=num%10;
        if (a==9) i9++;
        num=num/10;
    }
    if (i9==1) printf ("YES");
    else printf ("NO");
    return 0;
}