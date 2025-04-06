#include <stdio.h>

int main (void)
{
    int a[12];
    float sum=0;
    for (int i=0; i<=11; i++)
    {
        scanf ("%d", &a[i]);
        sum+=a[i];
    }
    
    printf ("%.2f", sum/12);
    return 0;

}