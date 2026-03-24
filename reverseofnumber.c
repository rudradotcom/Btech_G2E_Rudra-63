#include<stdio.h>
int main()
{
    int n,reverse=0,a=0;
    printf("Enter number to find reverse:");
    scanf("%d",&n);
    while (n>0) 
    {
        a=n%10;
        reverse=reverse*10+a;
        n=n/10;
    }
    printf("Reverse of number:%d",reverse);
}
