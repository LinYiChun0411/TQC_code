//�D��: ���лP��ƪ����Y

/* ��X���G���˥��p�U�ҥܡG
 �п�Jarr[0][0]: 10
 �п�Jarr[0][1]: 20
 �п�Jarr[0][2]: 30
 �п�Jarr[1][0]: 40
 �п�Jarr[1][1]: 50
 �п�Jarr[1][2]: 60
 
 �}�C���Ȧp�U:
 arr[0][0]=10
 arr[0][1]=20
 arr[0][2]=30
 arr[1][0]=40
 arr[1][1]=50
 arr[1][2]=60
 
 ���}�C���`�M��210
*/

/* �Y�U�@�{������ɻP�W�z����X���G�����ɡA�Х[�H�󥿤� */


#include <stdio.h>
#include <stdlib.h>

int sum(int p[][3], int n, int m);

int main ( ) 
{
     int arr2[2][3];
	int total, i, j;
	
	for (i=0; i<2; i++) {
		  for (j=0; j<3; j++) {
		      printf("�п�Jarr[%d][%d]: ", i, j);
		      scanf("%d", &arr2[i][j]);
		  }
	}
	
	printf("\n�}�C���Ȧp�U:\n");
	for (i=0; i<2; i++) {
		  for (j=0; j<3; j++) {
		      printf("arr[%d][%d]=%d\n", i, j, arr2[i][j]);
		  }
	}
 	
	total=sum(arr2, 2, 3);
 	printf("\n���}�C���`�M��%d\n", total);
	
	system("PAUSE");
	return 0;
}

int sum(int p[][3], int x, int y)
{
	int i, j, tot=0;
	for (i=0; i<x; i++) {
		 for (j=0; j<y; j++) {
			tot += p[i][j];
		 }
	}
	return tot;
}