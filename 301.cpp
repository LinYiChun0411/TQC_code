#include <stdio.h>
#include <stdlib.h>

void Star();
int main() 
{
	printf("�I�s�L�X�P�P�����!!!\n");
	Star();
	printf("�ڳ��w��C�{���y��\n");
    Star();
	printf("������ƪ��I�s!!!");
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
