#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int num1,num2,total;
printf("�п�J�Ĥ@�ӼƦr:");
scanf("%d",&num1);
printf("�п�J�ĤG�ӼƦr:");
scanf("%d",&num2);
printf("�Ĥ@�ӼƦr��%d�p��%d��%d��\n",num1/3600,num1/60%60,num1%60);
printf("�ĤG�ӼƦr��%d�p��%d��%d��\n",num2/3600,num2/60%60,num2%60);
total=num1-num2;
printf("��̬ۮt%d��",total);

	
	
	
	
	
system("pause");
return 0;
}
