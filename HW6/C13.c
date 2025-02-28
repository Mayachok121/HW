#include <stdio.h>
#include <math.h>

float preobraz (float n)
{
    n=n*M_PI/180;
    return n;
}

float sinus (float x)
{
    int k=2, znak=-1;
    int fact=2;
    float sum=1, step=x*x;
    while ((step/fact)>0.00001)
	{
		sum=sum+step/fact*znak;
		step=step*x*x;
		fact=fact*(k+1)*(k+2);
		k+=2;
		znak*=(-1);
	}
	return sum;
}


int main()
{
	float num;
	scanf ("%f", &num);
	num=preobraz (num);
	printf ("%.3f", sinus(num));
	return 0;
}