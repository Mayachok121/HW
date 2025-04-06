#include <stdio.h>

int main (void)
{
    int a[10], sum=0;
    for (int i=0; i<=9; i++)
    {
        scanf ("%d", &a[i]);
        if (a[i]>0) sum+=a[i];
    }
    
    printf ("%d", sum);
    return 0;

}