#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    int n;     /* ����Ϊ���� */
    int i, j, k, m; // �|�ӭp�ɾ� 
    printf("��J����Ϊ���� -> ");
    scanf("%d", &n); 
    
    /* �A���{���q�o�̶}�l  */
    m = n;
    for(k=1; k<=m; k++){
       for(j=n; j<m; j++)//�L�X�ť� 
          printf(" ");
       for(i=1; i<=n; i++)//�L�X�P�P 
          printf("*");
       printf("\n");
       n--;
    }
    
    system("pause");
    return 0;
}
