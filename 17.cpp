#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[5]={0};
	int i=0,min;
	printf("�п�J���Ӽƭ�\n");
	for(i=0;i<5;i++){
		printf("�п�J��%d�Ӹ��:",i+1);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<5;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("�̤p��:%d\n\n",min);
	system("PAUSE");
	return 0;
}
