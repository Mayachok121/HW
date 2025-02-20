
#include <stdio.h>

int main()
{
    int num, a, i1=0, i2=0, i3=0, i4=0, i5=0, i6=0, i7=0, i8=0, i9=0, i0=0;
    scanf ("%d", &num);
    while (num>0)
    {
        a=num%10;
        switch (a)
        {
        case 1 : i1++; break;
        case 2 : i2++; break;
        case 3 : i3++; break;
        case 4 : i4++; break;
        case 5 : i5++; break;
        case 6 : i6++; break;
        case 7 : i7++; break;
        case 8 : i8++; break;
        case 9 : i9++; break;
        case 0 : i0++;
        }
        num=num/10;
        }
    if ((i1>=2) || (i2>=2) || (i3>=2) || (i4>=2) || (i5>=2) || (i6>=2) || (i7>=2) || (i8>=2) || (i9>=2) || (i0>=2)) printf ("YES");
    else printf ("NO");
    return 0;
}