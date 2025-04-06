#include <stdio.h>

void swap(int*a,int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void BubbleSort(int* arr, int n)
{
    int flag;
    for(int i=n-1; i>=0; i--)
    {
        flag = 1;
        for(int j=0; j<i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                flag = 0;
            }
        }
        if(flag)
            break;
    }
}

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
    
    BubbleSort(a, k);
    
    for  (int j=0; j<k; j++)
        printf ("%d", a[j]);
}

int main(void)
{
    int num;
    scanf ("%d", &num);
    sort_print (num);
    return 0;
}