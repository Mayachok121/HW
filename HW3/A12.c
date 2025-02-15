#include <stdio.h>

int main(void)
{
    unsigned int num;
    scanf ("%d", &num);
    int c=num%10;
    num/=10;
    int b=num%10;
    int a=num/10;
    int sum = a+b+c;
    printf ("%d", sum); 
    
    return 0;
}