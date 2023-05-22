#include <stdio.h>

int main()
{   
	//char 타입의 표현 범위== -128~127
	char c1=128; //최댓값+1
	char c2=-129; //최솟값 -1
	printf("c1 : %d\nc2 : %d\n",c1,c2);
	//결과=> c1 : -128\n c2 : 127
	
	//unsigned char 타입의 표현범위==0~255
	unsigned char uc1=256; //최댓값 +1
	unsigned char uc2=-1; //최솟값 -1
	printf("uc1 : %d\nuc2 : %d\n",uc1,uc2);
	//결과=> uc1 : 0\n uc2 : 255
}