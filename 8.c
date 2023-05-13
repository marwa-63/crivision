#include <stdio.h>
#include <stdlib.h>
void max_min(int *max,int *min,int *a,int len)
{
    for(int i=1;i<len;i++)
    {
        if(a[i]> *max) *max=a[i];
         if(a[i] < *min) *min=a[i];
    }

}
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    max_min(&max,&min,arr,n);
    printf("The maximum element is:%d",max);
    printf("\nThe minimum element is:%d",min);
    return 0;
}
