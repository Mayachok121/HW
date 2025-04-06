#include <stdio.h>
#define SIZE 10

int sort_print (int a[], int size)
{
    for (int i = 0; i < size; i++) 
    {
        if ((a[i]%100-a[i]%10)==0)
        printf("%d ", a[i]);
    }
    return 1;
}

int read_massiv (int *a, int size)
{
    for (int i = 0; i < size; i++) 
    scanf("%d", &a[i]);
    return 1;
}

int main(void)
{
    int a[SIZE];
    
    read_massiv (a, SIZE);
    sort_print (a, SIZE);
    return 0;
}