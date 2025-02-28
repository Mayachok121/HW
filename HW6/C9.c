#include <stdio.h>

 int factorial (int n)
{
    int new=1;
    
    for(int i=1; i<=n; i++) 
    {
    new=new*i;
    }   
    return new;
}

int main()
{
    int n, p;
    scanf ("%d", &n);
    printf("%d", factorial (n));

    return 0;
}