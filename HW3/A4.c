#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf ("%d", &a); 
    scanf ("%d", &b); 
    scanf ("%d", &c); 
    int sum = a+b+c;
    int pr = a*b*c;
    printf("%d+%d+%d=%d\n",a,b,c,sum);
    printf("%d*%d*%d=%d\n",a,b,c,pr);
    return 0;
}