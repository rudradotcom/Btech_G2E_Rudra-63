#include<stdio.h>
int main(){
    int n,s1=0,s2=0;
    printf("Enter number till which you want to perform sum");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (i%2==0){
            s1=s1+i;
        }
        else{
            s2=s2+i;
        }
        
        
    }
    int s=s1+s2;
    printf("Sum of odd and even numbers:%d",s);
}
