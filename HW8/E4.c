#include <stdio.h>

int main (void)
{
    int a[10];
    for (int i=0; i<=9; i++)
    {
        scanf ("%d", &a[i]);
    }
    int max1=a[0], max2, num_max1=0;
    for (int i=1; i<=9; i++)
    {
        if (max1<a[i])
        {
            max1=a[i];
            num_max1=i;
        } 
    }
    if (num_max1==0) max2=a[1];
    else max2=a[0];
    for (int i=0; i<=9; i++)
    {
        if (num_max1==i) continue;
        if (max2<a[i]) max2=a[i];
    }
    int sum=max1+max2;
    printf ("%d", sum);
    return 0;

}