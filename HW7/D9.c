#include <stdio.h>

int sum_digits(int n)

{
    int sum=0;
    if (n>0)                 
    {

    sum=(n%10)+sum_digits(n/10);                 
    }
    return sum;    
}

int main (void) 
{
    int num;
    scanf("%d", &num);
    
    printf ("%d", sum_digits(num));
   
    return 0;
}