
#include <stdio.h>

int main(void)
{
    int a,b,c;
    //setlocale(LC_ALL, ".utf-8");
    scanf ("%d", &a); 
    scanf ("%d", &b); 
    scanf ("%d", &c); 
    int sum = a+b+c;
    printf("%d+%d+%d=%d\n",a,b,c,sum);
   
    return 0;
}