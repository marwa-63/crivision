#include <stdio.h>
#include <stdlib.h>

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
    int even=0,odd=0;
     for(int i=0;i<n;i++)
    {
        if(arr[i]%2 == 0) even++;
        else odd++;
    }
    printf("The total even elements :%d",even);
    printf("\nThe total odd elements :%d",odd);
    return 0;
}
