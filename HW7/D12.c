#include <stdio.h>

int print_num(int kol, int k)
{
   for (int i=1; i<=k; i++)
   {
       kol--;
       if (kol>=0)
       printf ("%d ", k);
       else return 0;
    }
    print_num(kol, k+1);
}    
  

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    print_num(n, 1);
    
    return 0;
}