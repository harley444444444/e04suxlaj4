#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int x,y,z;
printf("�O�k�Ϳ�J1�O�k�Ϳ�J2,�A��J�~��");
scanf("%d",&x);
if(x==1)
{
scanf("%d",&y);
if(y>=18)
printf("�i�H���B");
else
printf("���i�H���B");	
}

else  if(x==2)
{
scanf("%d",&z);	
if(z>=16)
printf("�i�H���B");
else
printf("���i�H���B");	
}
system("pause");
return 0;	
}

 
