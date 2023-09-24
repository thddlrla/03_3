#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
int a;
int b;
int c;
printf("분자를 입력하세요:");
scanf("%d", &a);
printf("분모를 입력하세요:");
scanf("%d", &b);

c= a/b;
printf("두수를 나눈 값은%7.6f 입니다.\n ", a / b);
scanf("%7.6", &c);

	
} 
