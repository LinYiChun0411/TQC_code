#include <stdio.h>
#include <stdlib.h>

struct  triangle {
		int width;
		int height;
};

int main () 
{	
	struct triangle *ptri; 	
	double area;
 	
	ptri =(triangle*) malloc(sizeof(triangle));
	
	printf("�п�J�T���Ϊ������h��: ");
	scanf("%d", &ptri->width);
	printf("�п�J�T���Ϊ������h��: ");
	scanf("%d", &ptri->height);
 
	area = (ptri->width * ptri->height)/2.;
 	printf("�T���Ϊ����n��%.2f\n", area);
 	
	system("PAUSE");
     return 0;
}
