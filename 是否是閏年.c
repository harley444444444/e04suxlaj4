#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
int year;
printf("�п�J�@�Ӧ褸�~��");
scanf("%d",&year);
if((year%4)==0 && (year%100)!=0) 
printf("�O�|�~\n");
else
printf("���O�|�~");
system("pause");
return 0;	
}
