#include <stdio.h>

int perevod (int chislo, int stepen)
{
    int new=0, k=1;
    
    while (chislo>0)
    {
        
        new=new+(chislo%stepen)*k;
        chislo/=stepen;
        k=k*10;
    }
    
    return new;
}

int main()
{
    int n, p;
    scanf ("%d %d", &n, &p);
    printf("%d", perevod (n,p));

    return 0;
}