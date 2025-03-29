int print_num(int num, int k)
{
   
    if (num<1) return k;                                //
    
        if ((num%2)==1) 
        {
            print_num(num/2, k+1);
        } 
        else 
        {
            print_num(num/2, k);
        }
        
}    
  

int main (void) 
{
    int n;
    scanf("%d", &n);
    
    if (n!=0) printf ("%d", print_num(n, 0));
    else  printf("0");
   
    return 0;
}