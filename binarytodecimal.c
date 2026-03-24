#include<stdio.h>
#include<math.h>
int main(){
    int n,decimal=0,a=0,i=0;
    printf("Enter binary number :");
    scanf("%d",&n);
    for(;n!=0;){
        a=n%10;
        decimal+=a*pow(2,i);
        n=n/10;
        i+=1;
        

    }
    printf("Decimal equivalent is %d",decimal);
}