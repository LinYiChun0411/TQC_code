#include <stdio.h>
#include <stdlib.h>

int main () 
{
	char string[20];
	int output;
	printf("請輸入一數字的字串: ");
	scanf("%s", string);
	
	output=atoi(string);
     printf("%s轉換後的整數為%d\n", string, output);
	system("PAUSE");
     return 0;
} 
