#include <stdio.h>


unsigned long long sum (int x)
{
    unsigned long long y=1;
    for (int i=2; i<=x; i++)
    {
        y=y*2;
    }
    return y;
}

int main()
{
    int n;
    scanf ("%d", &n);
    printf("%llu", sum(n));
    return 0;
}