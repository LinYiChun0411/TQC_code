#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int arr[]={100, 200, 300, 400, 500};
	int *pointer=arr;
	int i;
 	
	for (i=0; i<5; i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
	
	//�t�@�ت��ܤ�k
	printf("\n�t�@�ت��ܤ�k\n");
	for (i=0; i<5; i++) {
		printf("arr[%d]=%d\n", i, *(arr+i));
	}
	
	//�ĤT�ت��ܤ�k
	printf("\n�ĤT�ت��ܤ�k\n");
	for (i=0; i<5; i++) {
		printf("arr[%d]=%d\n", i, *(pointer+i));
	}
	
	system("PAUSE");
	return 0;
}