#include<stdio.h>
int main(){
    int b;
    printf("Enter number to check whether even or odd ");
    scanf("%d",&b);
    if (b%2==0){
        printf("Number is even");

    }else {
        printf("Number is odd");

    }
    return 0;

}