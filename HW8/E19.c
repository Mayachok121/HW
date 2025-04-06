#include <stdio.h>

int sort_print (int n)
{
    int num=n, k=0;
    while (num!=0) 
    {
        num/=10;
        k++;
    }  
    int a[k];
    
    for (int i = k-1; i >= 0; i--)
    {
        a[i]=n%10;
        n/=10;
    }
    
    for  (int j=0; j<k; j++)
        printf ("%d ", a[j]);
}

int main(void)
{
    int num;
    scanf ("%d", &num);
    sort_print (num);
    return 0;
}