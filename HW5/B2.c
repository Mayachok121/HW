#include <stdio.h>

int main()
{
    int a, b, q2;
    scanf ("%d %d", &a, &b);
    b++;
    for (int i=a; i<b; i++)
    {
        q2=i*i;
        printf("%d ", q2);
    }
    return 0;
}