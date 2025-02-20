#include <stdio.h>

int main()
{
    int num, max=0, min=9;
    scanf ("%d", &num);
    
    while (num>0)
    {
        if (max<num%10) max=num%10;
        if (min>num%10) min=num%10;
        num=num/10;
    }
    printf ("%d %d", min, max);
    return 0;
}