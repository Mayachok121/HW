#include <stdio.h>

int main(void)
{
    int num;
    scanf ("%d", &num);
    if ((num<=2) || (num==12))
        printf ("winter");
    else if ((num>=3) && (num<=5))
        printf ("spring");
    else if ((num>=6) && (num<=8))
        printf ("summer");
    else printf ("autumn");
    
    return 0;
}