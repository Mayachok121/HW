#include <stdio.h>

int main (void)
{
    int a[5];
    for (int i=0; i<=4; i++)
    {
        scanf ("%d", &a[i]);
    }
    int min=a[0];
    for (int i=1; i<=4; i++)
    {
        if (min>a[i]) min=a[i];
    }
    printf ("%d", min);
    return 0;

}