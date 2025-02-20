#include <stdio.h>

int main()
{
    int num, q2, q3;
    scanf ("%d", &num);
    for (int i=1; i<num+1; i++)
    {
        q2=i*i;
        q3=i*i*i;
        printf("%d %d %d\n", i, q2, q3);
    }
    return 0;
}