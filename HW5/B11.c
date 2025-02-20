#include <stdio.h>

int main()
{
    int num, new=0;
    scanf ("%d", &num);
    while (num>0)
    {
    new*=10;
    new+=num%10;
    num/=10;
    }
    printf ("%d", new);
    return 0;
}