#include<stdio.h>
int main ( )
{
    float principle,time,rate,SI;
    printf("Enter principle(amount):",principle);
    scanf("%f", & principle);
    printf("Enter time:",time);
    scanf("%f",&time);
    printf("Enter rate:",rate);
    scanf("%f", & rate);
    
SI=(principle*time*rate/100);
printf ("simple intrest=%f",SI);
return 0;
}
