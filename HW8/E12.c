#include <stdio.h>
#define SIZE 10

void swap(int*a,int*b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


int sort_minmax_chast_massiv (int *a, int kol, int nachalo)
{
    int i = nachalo;
    _Bool flag;
    do
    {
        flag = 0; // сбросить флаг
        for (int j = kol+nachalo-2; j >= i ; j-- )
        {
            if ( a[j] > a[j+1])
            {
                swap(&a[j], &a[j+1]);
                flag = 1; // поднять флаг если есть обмен
            }
        }
        i++;
    }
    while ( flag ); // выход при flag = 0
}

int sort_maxmin_chast_massiv (int *a, int kol, int nachalo)
{
    int i = nachalo;
    _Bool flag;
    do
    {
        flag = 0; // сбросить флаг
        for (int j = kol+nachalo-2; j >= i ; j-- )
        {
            if ( a[j] < a[j+1])
            {
                swap(&a[j], &a[j+1]);
                flag = 1; // поднять флаг если есть обмен
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
    sort_minmax_chast_massiv (a, (SIZE/2), 0);
    sort_maxmin_chast_massiv (a, (SIZE/2), (SIZE/2));
    print_massiv (a, SIZE);
    return 0;
}