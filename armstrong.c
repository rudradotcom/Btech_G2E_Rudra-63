#include<stdio.h>
#include<math.h>
int main()
{
    int n,armstrong=0,s=0,r,t,i,sum,k;
    printf("Armstrong numbers between 1 to 10000 are:");
    for(n=1;n<=10000;n++)
    {
        t=n;
        k=n;
        while(n>0)
        {
            n=n/10;
            i++;
        }
        while(t>0)
        {
            sum=sum+pow((t%10),i);
            t=t/10;
        }
  
      if(sum==k)
      {
        printf("%d ",k);
      }
    }
}
