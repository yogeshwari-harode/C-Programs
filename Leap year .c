#include<stdio.h>
#include<conio.h>
int main()
{
    int year;
    
    printf("Enter the year  : ");
    scanf("%d",&year);
    
    if(year%4)
      printf("Not a Leap year.");
    else if(year%100)
      printf("Leap year.");
    else if(year%400)
     printf("Not a Leap year.");
    else 
     printf("Leap year.");
      
    return 0;
}
