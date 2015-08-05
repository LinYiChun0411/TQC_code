#include <stdio.h>
#include <stdlib.h>

void Star();
int main() 
{
	printf("呼叫印出星星的函數!!!\n");
	Star();
	printf("我喜歡學C程式語言\n");
    Star();
	printf("結束函數的呼叫!!!");
	system("PAUSE");
	return 0;
}

void Star()
{
	int i;
	for(i=1; i<=30; i++)
	         printf("*");
	printf("\n");
}

