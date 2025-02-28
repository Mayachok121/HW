#include <stdio.h>

int max (int num)
{
    if (num>=0)
        return num;
    return num*(-1); 
}
int main ()
{
    int a;
    scanf ("%d", &a);
    printf ("%d\n", max(a));
    return 0;
}