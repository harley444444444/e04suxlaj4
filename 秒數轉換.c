#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int second,minute,hour;
printf("叫块计:");
scanf("%d",&second);
minute=second/60;
hour=minute/60;
printf("计琌%d\n",second%60);
printf("だ牧计琌%d\n",minute%60);
printf("计琌%d\n",hour);
system("pause");
return 0;
	
}


 

