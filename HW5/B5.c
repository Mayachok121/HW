#include <stdio.h>

int main()
{
    int num, sum=0, a;
    scanf ("%d", &num);
    do 
    {
        a=num%10;
        sum+=a;
        num=num/10;
    }
    while (num!=0);
    
    printf("%d", sum);
    return 0;
}