#include <stdio.h>

void print_num(int A, int B)
{
    if (A>B)                 
    {
        printf("%d ", A);
        print_num(A-1, B);                 
    }
    else if (A<B) 
    {
        printf("%d ", A);
        print_num(A+1, B);
    }
    else printf("%d ", B);
}

int main (void) 
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    if (n1==n2) printf("%d", n1);
    else  print_num(n1,n2);
   
    return 0;
}