#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf ("%d", &a); 
    scanf ("%d", &b); 
    scanf ("%d", &c); 
    float sr = (float)(a+b+c)/3;
    printf("%.2f",sr);
    return 0;
}