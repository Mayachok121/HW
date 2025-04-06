#include <stdio.h>
#define SIZE 10

int proverka (int *num, int *k, int delitel)
{
    if (((*num)%delitel) == 0)
    (*k)++;
    return (*k);
}

int sort_print (int n)
{
    int kol[8];
    for (int i = 2; i <= n; i++) 
    {
        for (int j=0; j<8; j++)
        proverka (&i, kol+j, j+2);
    }
    for (int s=0; s<8; s++)
    printf ("%d %d\n", s+2, kol[s]);
    return 1;
}

/*int read_massiv (int *a, int size)
{
    for (int i = 0; i < size; i++) 
    scanf("%d", &a[i]);
    return 0;
}*/

int main(void)
{
    int num;
    scanf ("%d", &num);
    sort_print (num);
    return 0;
}