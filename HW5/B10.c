#include <stdio.h>

int main()
{
    int num, a, b, f=1;
    scanf ("%d", &num);
    while (num>9)
    {
        a=num%10;
        num=num/10;
        b=num%10;
        if (a<=b) f=0;
    }
    if (f==1) printf ("YES");
    else printf ("NO");
    return 0;
}