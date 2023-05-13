#include <stdio.h>
#include <stdlib.h>
void max_min(int *max,int *min,int a[])
{
    for(int i=1;i<4;i++)
    {
        if(a[i]> *max) *max=a[i];
         if(a[i] < *min) *min=a[i];
    }

}
int main()
{
    int a[4];
    printf("Enter four numbers:");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    max_min(&max,&min,a);
    printf("The maximum number is:%d",max);
    printf("\nThe minimum number is:%d",min);
    return 0;
}
