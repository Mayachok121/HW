#include <stdio.h>

void print_num(int num)
{
   if (num>0)                 
    {
    printf("%d ", num);
    print_num(num-1);                 
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