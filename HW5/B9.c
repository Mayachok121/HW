
#include <stdio.h>

int main()
{
    int num, a, i=0;
    scanf ("%d", &num);
    while (num>0)
    {
        a=num%10;
        if ((a%2)==1)
        i++;
        num=num/10;
    }
    if (i>0) printf ("NO");
    else printf ("YES");
    return 0;
}