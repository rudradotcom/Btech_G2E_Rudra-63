#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,t,i,sum,k,l;
    printf("Armstrong numbers between 1 to 10000 are:");
    for(n=1;n<=10000;n++)
    {
        t=n;
        k=n,i=0;
        while(t>0)
        {
            t=t/10;
            i++;
        }
        sum=0;l=0;
        while(k>0)
        {
            l=k%10;
            sum=sum+(int)pow(l,i);                       
            k=k/10; 
        }
        if(sum==n)
        {
        printf("%d \n",n);
    }
}
    return 0;
}
