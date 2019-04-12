
#include <stdio.h>

#include <stdlib.h>



/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {

	int a,b;

	printf("請輸入現在幾點");

	scanf("%d",&a);

	printf("請輸入現在幾分");

	scanf("%d",&b);

	if((a==7&&b>=30)||(a>7&&a<17))

	printf("上學時間\n");

	else

	printf("放學時間\n");

	system("PAUSE");

	return 0;

}
