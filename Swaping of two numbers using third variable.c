#include<stdio.h>
#include<conio.h>
int main()
{
	int A,B,C;
	printf("Enter the value of A : ");
	scanf("%d",&A);
	printf("Enter the value of B : ");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf("After swaping the value of A and B :\n");
	printf("A : %d\n",A);
	printf("B : %d",B);
	return 0;
}
