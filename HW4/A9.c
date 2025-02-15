#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, max;
    scanf ("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if (num1>num2)
        max=num1;
    else max=num2;
    if (max<num3) 
        max=num3;
    if (max<num4)
        max=num4;
    if (max<num5)
        max=num5;
    
    printf ("%d", max);
    
    return 0;
}