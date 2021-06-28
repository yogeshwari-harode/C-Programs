#include<stdio.h>
#include<conio.h>
int fact(int);

int fact(int n)
{
    if(n>=1)
    return (n*fact(n-1));
    else
    return 1;
}

int main()
{
    int f,n;
   printf("Enter any number : ");
   scanf("%d",&n);
   f=fact(n);
   printf("Factorial of %d is %d",n,f);
}
