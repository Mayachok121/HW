#include <stdio.h>
#define SIZE 10

int sort_print (int a[], int size)
{
    int flag=0;
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++)
        {
            if (i==j) continue;
            if (a[i]==a[j]) 
            flag=1;
        }
        if (flag==0) printf ("%d ", a[i]);
        flag=0;
    }
    return 1;
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