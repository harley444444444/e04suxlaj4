#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int x,y,z;
printf("是男生輸入1是女生輸入2,再輸入年紀");
scanf("%d",&x);
if(x==1)
{
scanf("%d",&y);
if(y>=18)
printf("可以結婚");
else
printf("不可以結婚");	
}

else  if(x==2)
{
scanf("%d",&z);	
if(z>=16)
printf("可以結婚");
else
printf("不可以結婚");	
}
system("pause");
return 0;	
}

 
