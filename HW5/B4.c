#include <stdio.h>

int main()
{
    int num;
    scanf ("%d", &num);
    int d3 = num / 100;
    if (d3<10 && d3>0)
        printf("YES");
    else printf("NO");
    return 0;
}