#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int arr[2][3]={100, 200, 300, 400, 500, 600};
	int *ptr2[2]={arr[0], arr[1]};
  	int i, j;
 
	
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
		}
 	}
	
	
	//�t�@�ت��ܤ�k
	printf("\n�t�@�ت��ܤ�k\n");
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, *(arr[i]+j));
		}
	}
	
	
	//�ĤT�ت��ܤ�k
	printf("\n�ĤT�ت��ܤ�k\n");
	for (i=0; i<2; i++) {
		for (j=0; j<3; j++) {
			printf("arr[%d][%d]=%d\n", i, j, *(*(ptr2+i)+j));
		}
	}
 	
	system("PAUSE");
	return 0;
}