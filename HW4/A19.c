#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    if (((a+b)<=c) || ((a+c)<=b) || ((b+c)<=a) || (b<=0) || (a<=0) || (c<=0))
        printf ("NO");
    else printf ("YES");
    
    return 0;
}