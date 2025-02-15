#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5, min, max, sum;
    scanf ("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    if (num1>num2)
    {
        min=num2;
        max=num1;
    }
    else 
    {
        min=num1;
        max=num2;
    }
    if (min>num3) 
        min=num3;
    if (min>num4)
        min=num4;
    if (min>num5)
        min=num5;
    if (max<num3) 
        max=num3;
    if (max<num4)
        max=num4;
    if (max<num5)
        max=num5;    
    sum=min+max;
    printf ("%d", sum);
    
    return 0;
}