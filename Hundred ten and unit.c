#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,hun,ten,unit;
	printf("plese enter 3-digit number : ");
	scanf("%d",&n);
	hun=n/100;
	n=n%100;
	ten=n/10;
	unit=n%10;
	printf("%d hundreds %d tens %d units",hun,ten,unit);
	return 0;
}
