#include <stdio.h>
#define SIZE 10

int sort_print (int a[], int size)
{
    int max=0, max_num, k=0;
    for (int i = 0; i < size-1; i++) 
    {
        for (int j = i+1; j < size; j++)
        {
            if (a[i]==a[j]) 
            k++;
        }
        if (max<k) 
        {
            max=k;
            max_num=a[i];
        }
        k=0;
    }
    return max_num;
}

int read_massiv (int *a, int size)
{
    for (int i = 0; i < size; i++) 
    scanf("%d", &a[i]);
    return 0;
}

int main(void)
{
    int a[SIZE];
    
    read_massiv (a, SIZE);
    printf ("%d", sort_print (a, SIZE));
    return 0;
}