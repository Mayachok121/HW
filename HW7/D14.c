#include <stdio.h>

int prints()
{
    int num;
    scanf("%d", &num);
    if (num==0) return 0;
    if (((num%2)==1) || ((num%2)==-1))
    {
        printf ("%d ", num);
        prints ();
    }
    
    else prints ();
}



int main (void) 
{
    int num;
    prints();
    
   
    return 0;
}