#include<stdio.h>
int main()
{
    int p,r,t,simple_interest;
    
    printf("Enter the value of p : ");
    scanf("%d",&p);
    
    printf("Enter the value of r : ");
    scanf("%d",&r);
    
    printf("Enter the value of t : ");
	  scanf("%d",&t);
	  
    simple_interest=(p*r*t)/100;
	  printf("simple_interest=%d",simple_interest);
	
  return 0;
}
