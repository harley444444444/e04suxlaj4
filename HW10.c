#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
int I=2;  //��Ȩ�I�����s
while (I)  //��A������ܦ������s�ɹ�{�᭱���j��
{
char b;
scanf("%c", &b);
if (b >= 'A' && b <= 'Z')
{
b = b + 32;
printf("%c", b);
}
else if (b >= 'a' && b <= 'z')
{
b = b - 32;
printf("%c", b);
}
}
return 0;
}
