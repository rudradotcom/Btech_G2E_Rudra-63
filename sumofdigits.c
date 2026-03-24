#include<stdio.h>
int main()
{
    int n,s=0,a=0;
    printf("Enter number to find sum of digits:");
    scanf("%d",&n);
    while (n>0)
    {
        a=n%10;
        s=s+a;
        n=n/10;
    }
    printf("Sum of digits:%d",s);
}
        