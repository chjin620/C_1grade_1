#include <stdio.h>

int main()
{
	int a;
	int b;
	printf("두 정수를 공백으로 구분하여 입력하세요.\n");
	
	scanf("%d%d",&a,&b);
	
	int c=a*b;
	printf("두 수의 곱은 %d 입니다.",c);
}