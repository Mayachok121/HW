#include <stdio.h>

int main (void)
{
    int a[5];
    float sum=0;
    for (int i=0; i<=4; i++)
    {
        scanf ("%d", &a[i]);
        sum+=a[i];
    }
    sum/=5;
    printf ("%.3f", sum);
    return 0;

}