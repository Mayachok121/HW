#include <stdio.h>

int main(void)
{
    int num, max;
    scanf ("%d", &num);
    int c=num%10;
    num/=10;
    int b=num%10;
    int a=num/10;
    if (a>b)
        max=a;
    else max=b;
    if (max<c) 
        max=c;
    
    printf ("%d", max);
    
    return 0;
}