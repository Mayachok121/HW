#include <stdio.h>

int main(void)
{
    int num1, num2, num3, max;
    scanf ("%d %d %d", &num1, &num2, &num3);
    if (num1>num2)
        max=num1;
    else max=num2;
    if (max>num3)
        printf ("%d", max);
    else printf ("%d", num3);
     
    return 0;
}