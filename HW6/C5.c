#include <stdio.h>


int sum (int x)
{
    int y=0;
    for (int i=1; i<=x; i++)
    {
        y+=i;    
    }
    return y;
}

int main()
{
    int n;
    scanf ("%d", &n);
    printf("%d",sum (n));
    return 0;
}