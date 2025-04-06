#include <stdio.h>

int main (void)
{
    int a[12], b[12];
    float sum=0;
    for (int i=0; i<=11; i++)
    {
        scanf ("%d", &a[i]);
        
        if (i<4) b[3-i]=a[i];
        else if ((i>3)&&(i<8)) b[11-i]=a[i];
        else b[19-i]=a[i];
    }
    
    for (int i=0; i<=11; i++)
    {
        printf ("%d ", b[i]);
    }
    
    return 0;

}