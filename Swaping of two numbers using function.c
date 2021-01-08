#include<stdio.h>
#include<conio.h>
void swap();

int main()
{
	swap();
	return 0;
}

void swap()
{
	
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("The value of a is : %d\n",a);
	printf("The value of b is : %d",b);
	
}
