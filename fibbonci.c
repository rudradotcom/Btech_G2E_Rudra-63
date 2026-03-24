#include <stdio.h>
int main() 
{
    int n , a=0, b=1 ,i=3, c;
    printf ("Input the terms:");
    scanf ("%d", &n);
    printf ("Fibonacci Series: %d \n %d ", a, b);
    while (i<=n)
    {
        c = a + b;
        printf ("%d \n", c);
        a = b;
        b = c;
        i++;
    }
    return 0;
}
  