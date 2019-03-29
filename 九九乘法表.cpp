#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int a,b;
printf("下面的是九九乘法表\n"); 
for(a=1;a<=9;a++)
for(b=1;b<=9;b++)
printf("%d*%d=%d\f",a,b,a*b);
system("pause");
return 0;	
}
