#include <stdio.h>

int main(void)
{
    unsigned int num;
    scanf ("%d", &num);
    int c=num%10;
    num/=10;
    int b=num%10;
    int a=num/10;
    int pr = a*b*c;
    printf ("%d", pr); 
    
    return 0;
}