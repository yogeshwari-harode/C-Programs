#include<stdio.h>
#include<conio.h>
int main()
{
    int x,*ptr;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    ptr=&x;
    printf("The value of x is %d and address of x is %d \n",x,ptr);
    *ptr++;
    printf("The value of x is %d and address of x is %d \n",x,ptr);
    --ptr;
    printf("The value of x is %d and address of x is %d \n",x,ptr);
    return 0;
}
