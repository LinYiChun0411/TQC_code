#include <stdio.h>
#include <stdlib.h>

int num = 100;

void subFun();
int main()
{
    
    int num=200;
	printf("在main函數中的num為%d\n", num);
	subFun();
	
	system("PAUSE");
	return 0;
}

void subFun()
{
	printf("在subFun函數中的num為%d\n", num);
}

