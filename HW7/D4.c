#include <stdio.h>

void print_num(int num)
{
   if (num>0)                 
    {
    print_num(num/10);                 
    printf("%d ", num%10);
    }
        
}

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    if (n!=0) print_num(n);
    else  printf("0");
   
    return 0;
}