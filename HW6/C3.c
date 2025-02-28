#include <stdio.h>

int middle (int num1, int num2)
{
    int sum = (num1+num2)/2;
    
    return sum;
}
int main (void)
{
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d\n", middle(a, b));
    return 0;
}