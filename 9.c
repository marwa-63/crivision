#include <stdio.h>
#include <stdlib.h>
int binarytodecimal(int binary)
{
    int decimal=0,base=1;
     while(binary)
    {
        decimal+=(binary%10) * base;
        base*=2;
        binary/=10;
    }
    return decimal;

}
int main()
{
    int binary,decimal;
    printf("Enter the binary number:");
    scanf("%d",&binary);
    decimal=binarytodecimal(binary);
    printf("%d to decimal is:%d",binary,decimal);
    return 0;
}
