#include <stdio.h>

int main (void)
{
    int a[10], num_min=0, num_max=0;
    for (int i=0; i<=9; i++)
    {
        scanf ("%d", &a[i]);
    }
    int min=a[0], max=a[0];
    for (int i=1; i<=9; i++)
    {
        if (min>a[i]) 
        {
            min=a[i];
            num_min=i;
        }
        if (max<a[i])
        {
            max=a[i];
            num_max=i;
        } 
    }
    printf ("%d %d %d %d", num_max+1, max, num_min+1, min);
    return 0;

}