#include<stdio.h>
#include<conio.h>
int main()
{
    float P,R,T,SI;
    printf("Enter the value of P : ");
    scanf("%f",&P);
    
    printf("Enter the value of R : ");
    scanf("%f",&R);
    
    printf("Enter the value of T : ");
    scanf("%f",&T);
	  
    SI=(P*R*T)/100;
    printf("simple_interest = %f",SI);
	
  return 0;
}
