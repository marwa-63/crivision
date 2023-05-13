#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter any number to find sum of its digits:");
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("The sum of digits is:%d",sum);
    return 0;
}
