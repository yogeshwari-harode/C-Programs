#include<stdio.h>
#include<conio.h>
int main()
{
    int centigrade,Fahrenheit;
    printf("Enter centigrade : ");
    scanf("%d",&centigrade);
    
    //centigrade = (Fahrenheit - 32) / 1.8;
    Fahrenheit=1.8*centigrade+32;
 
    printf("Fahrenheit : %d",Fahrenheit);
    return 0;
}
