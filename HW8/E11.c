#include <stdio.h>
#define SIZE 10
void swap(int*a,int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int sort_massiv (int *a, int size)
{
    int i = 0;
    _Bool flag;
    do
    {
        flag = 0; // сбросить флаг
        for (int j = size-2; j >= i ; j-- )
        {
            if ( (a[j]%10) > (a[j+1]%10))
            {
                swap(&a[j], &a[j+1]);
                flag = 1; // поднять флаг если есть обмен
            }
            else if ((a[j]%10) == (a[j+1]%10))
            {
                if ((a[j]%100) > (a[j+1]%100));
                {
                    swap(&a[j], &a[j+1]);
                    flag = 1;
                }
            }
        }
        i++;
    }
    while ( flag ); // выход при flag = 0
}

int read_massiv (int *a, int size)
{
    for (int i = 0; i < size; i++) 
    scanf("%d", &a[i]);
    return 1;
}

int  print_massiv (int a[], int size)
{
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
    return 1;
}

int main(void)
{
    int a[SIZE];
    
    read_massiv (a, SIZE);
    sort_massiv (a, SIZE);
    print_massiv (a, SIZE);
    
    return 0;
}