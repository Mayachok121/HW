#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf ("%d", &num1);
    scanf ("%d", &num2);
    if (num1<num2)
        printf ("%d %d", num1, num2); 
    else printf ("%d %d", num2, num1);
    return 0;
}