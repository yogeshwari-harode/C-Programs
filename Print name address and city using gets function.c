#include<stdio.h>
#include<conio.h>
int main()
{
	char Name[35],Address[100],City[30];
	
	printf("Enter Your Name : ");
	gets(Name);
	printf("Enter Your Address : ");
	gets(Address);
	printf("Enter Your City : ");
	gets(City);
	
	printf("Name    : %s\n",Name);
	printf("Address : %s\n",Address);
	printf("City    : %s\n",City);
	return 0;
}
