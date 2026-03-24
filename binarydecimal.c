#include<stdio.h>
#include<math.h>
int main()
{
   long long binarytodecimaL(long long binarynum){
   long long decimalnum=0, base=1, rem;
   while(binarynum>0)
   {
         rem=binarynum%10;
         decimalnum=decimalnum+rem*base;
         binarynum=binarynum/10;
         base=base*2;
   }
    return decimalnum;
}
    long long decimaltoBinary(long long decimalnum){
    long long binarynum=0, rem, base=1;
    while(decimalnum>0)
    {
        rem=decimalnum%2;
        binarynum=binarynum+rem*base;
        decimalnum=decimalnum/2;
        base=base*10;
    }
    return binarynum;
    }
    int main()
    {
        int choice, decimalinput;
        long long binaryinput,binaryoutput;
        printf("Enter 1 to convert binary to decimal and 2 to convert decimal to binary: ");
        scanf("%d", &choice);
        if(choice==1)
        {
            printf("Enter a binary number: ");
            scanf("%lld", &binaryinput);
            decimalinput=binarytodecimaL(binaryinput);
            printf("Decimal equivalent: %d\n", decimalinput);
        }
        else if(choice==2)
        {
            printf("Enter a decimal number: ");
            scanf("%d", &decimalinput);
            binaryoutput=decimaltoBinary(decimalinput);
            printf("Binary equivalent: %lld\n", binaryoutput);
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
}