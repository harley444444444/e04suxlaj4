#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int num1,num2,total;
printf("請輸入第一個數字:");
scanf("%d",&num1);
printf("請輸入第二個數字:");
scanf("%d",&num2);
printf("第一個數字為%d小時%d分%d秒\n",num1/3600,num1/60%60,num1%60);
printf("第二個數字為%d小時%d分%d秒\n",num2/3600,num2/60%60,num2%60);
total=num1-num2;
printf("兩者相差%d秒",total);

	
	
	
	
	
system("pause");
return 0;
}
