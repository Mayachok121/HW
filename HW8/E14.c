#include <stdio.h>
#define SIZE 10

int  print_massiv (int a[], int size)
{
    for (int i = 0; i < size; i++) printf("%d ", a[i]);
    return 0;
}

int sort_print (int a[], int size)
{
    int k=0; int flag=0;
    int b[size];
    for (int i = 0; i < size-1; i++) 
    {
        for (int j=(i+1); j<size; j++)
        {
            if (a[i]==a[j])
            {
                if (k==0) 
                {
                    b[0]=a[i]; 
                    printf("%d ", b[k]);
                    k++;
                }
                else
                {
                    for (int s=0; s<k; s++)
                    {
                        if (b[s] == a[i])
                        {
                            flag=1;
                            break;
                        }
                    }
                    if (flag==0)
                    {
                        b[k]=a[i];
                        printf("%d ", b[k]);
                        k++;
                    }
                    else flag=0;
                    
                }
            }
            
        }
        
    }
    //print_massiv (b, k);
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