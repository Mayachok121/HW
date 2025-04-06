#include <stdio.h>
#define SIZE 10

int  print_massiv (int a[], int size)
{
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
    return 0;
}

int sort_print (int a[], int size)
{
    int k=0, m=0;
    int b[size], c[size];
    for (int i = 0; i < size; i++) 
    {
        if (a[i]>0) 
        {
            b[k]=a[i];
            k++;
        }
        else if (a[i]<0)
        {
            c[m]=a[i];
            m++;
        }
    }
    print_massiv (b, k);
    print_massiv (c, m);
    return 0;
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
    sort_print (a, SIZE);
    return 0;
}