#include<stdio.h>
#include<stdlib.h> 
int main() {
    int n = 0, i = 0;
    printf("�п�J�@��ơG");
    scanf("%d", &n);
    int array[10] = {};
    while(n) {
        array[n % 10]++;
        n /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (array[i] != 0)
            printf ("%d��%d��\n", i, array[i]);
	}
	system("PAUSE");
	return 0;
	}	
