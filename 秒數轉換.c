#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int second,minute,hour;
printf("�п�J���:");
scanf("%d",&second);
minute=second/60;
hour=minute/60;
printf("�A����ƬO%d\n",second%60);
printf("�A�������ƬO%d\n",minute%60);
printf("�A���p�ɼƬO%d\n",hour);
system("pause");
return 0;
	
}


 

