#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
float a,b,c;	
printf("請輸入你的身高:");
scanf("%f",&a);
printf("請輸入你的體重:");
scanf("%f",&b);
float an=a*a;
c=b/an;
printf("你的BMI為:%f\n",c);
system("pause");
return 0;

} 

