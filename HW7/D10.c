#include <stdio.h>


int is_prime(int n, int delitel)
{
    if (n==1) return 1;
    if (delitel==n) return 0;
    //printf ("%d ", delitel);
    if ((n%delitel)==0) return 1;
    is_prime(n, delitel+1);
}

int main (void) 
{
    int num;
    scanf("%d", &num);
    
    if (is_prime(num, 2)==0) printf ("YES");
    else printf ("NO");
    
   
    return 0;
}