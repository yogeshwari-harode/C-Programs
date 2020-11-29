#include<stdio.h>
#include<conio.h>
int main()
{
    int Hindi,English,Maths,Physics,Chemistry;
    float Percentage;
    Printf(" Enter the marks of Hindi");
    scanf("%d",& Hindi);
    Printf(" Enter the marks of English);
    scanf("%d",& English);
    Printf(" Enter the marks of Maths);
    scanf("%d",& Maths);
    Printf(" Enter the marks of Physics);
    scanf("%d",& Physics);
    Printf(" Enter the marks of Chemistry);
    scanf("%d",& Chemistry);
    Percentage=((Hindi+English+Maths+Physics+Chemistry)*100)/500;
    printf ("percentage of student is =%f", percentage);
    return 0;
}    
