#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    printf("The reverse of the array is : ");
    for(int i=n; i>=1; i--)
          {   
            printf("%d ",arr[i-1]);
        }
return 0;    
}
