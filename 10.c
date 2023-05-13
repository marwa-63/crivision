#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,nbit,setbit;
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("Enter nth bit to check (0-32):");
    scanf("%d",&nbit);
    setbit=(n>>nbit) & 1;
    printf("The %d bit is set to :%d",nbit,setbit);

    return 0;
}
