#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int second,minute,hour;
printf("請輸入秒數:");
scanf("%d",&second);
minute=second/60;
hour=minute/60;
printf("你的秒數是%d\n",second%60);
printf("你的分鐘數是%d\n",minute%60);
printf("你的小時數是%d\n",hour);
system("pause");
return 0;
	
}


 

