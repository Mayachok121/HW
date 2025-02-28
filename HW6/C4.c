#include <stdio.h>


int f(int x)
{
    if ((x>=-2) && (x<2)) return (x*x);
    else if (x>=2) return (x*x+4*x+5);
    else return 4;
    
}

int main()
{
    int num, max, i=0;
    do
    {
       i++;
       scanf ("%d", &num);
       if (i==1) max= f(num);
       else if (max<f(num)) max=f (num);
    } 
    while (num!=0);
 
    printf("%d",max);
    return 0;
}