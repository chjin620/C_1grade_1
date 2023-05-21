#include <stdio.h>

int main()
{
	char name[16]={0};
	int age;
	
	printf("이름과 나이를 공백으로 구분하여 입력하세요.\n");
	scanf("%s%d",name,&age);

	printf("이름 : %s\n나이 : %d",name,age);
	
}