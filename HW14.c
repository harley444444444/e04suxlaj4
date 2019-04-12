#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
int a, b, c; 
printf("請輸入整數："); scanf("%d", &a); 
printf("請輸入整數："); scanf("%d", &b); 
printf("請輸入整數："); scanf("%d", &c); 
if( a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b ){ 
if( a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b ) 
printf("三角形\n"); 
else if( a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b ) 
printf("三角形\n"); 
else if( a * a < b * b + c * c || b * b < a * a + c * c || c * c < a * a + b * b ) 
printf("三角形\n"); 
} else 
printf("不是三角形\n"); 
system("pause"); 
return 0; 
} 
