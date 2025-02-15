#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, min;
    scanf ("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if (num1>num2)
        min=num2;
    else min=num1;
    if (min>num3) 
        min=num3;
    if (min>num4)
        min=num4;
    if (min>num5)
        min=num5;
    
    printf ("%d", min);
    
    return 0;
}