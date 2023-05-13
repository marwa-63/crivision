#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int cnt1=0,cnt0=0;
    while(n>0)
    {
        if(n&1)
            cnt1++;
        else
            cnt0++;
         n = n >> 1;
    }
    printf("number of zeros is:%d",cnt0);
    printf("\nnumber of ones is:%d",cnt1);
    return 0;
}
