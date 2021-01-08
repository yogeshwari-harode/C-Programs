#include<stdio.h>
#include<conio.h>
void simple_interest();

int main()
{
	simple_interest();
	return 0;
}

void simple_interest()
{
	
	float p,r,t,SI;
	printf("Enter the value of p,r,t");
	scanf("%f%f%f",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("%f",SI);
}
