#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the year:\n");
    scanf("%d",&n);
    if(n%4 == 0)
    printf("It is a leap Year\n");
    else
        printf("It is not a leap Year\n");

    return 0;
}
