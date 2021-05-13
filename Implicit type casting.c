#include<stdio.h>
#include<conio.h>
int main() 
{ 
    int x; 
    float y,product;
    
	printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter any float number : ");
    scanf(" %f",&y);
    
    printf("The Given value of x is :%d\n",x);
    printf("The Given value of y is :%f\n",y);    
    
   	// x is implicitly converted to float 
    
	product= x*y; 
    printf("\n%d*%f = %f",x,y,product);
    return 0; 
}
