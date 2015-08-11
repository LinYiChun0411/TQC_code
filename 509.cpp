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
	
	printf("請輸入三角形的底為多少: ");
	scanf("%d", &ptri->width);
	printf("請輸入三角形的高為多少: ");
	scanf("%d", &ptri->height);
 
	area = (ptri->width * ptri->height)/2.;
 	printf("三角形的面積為%.2f\n", area);
 	
	system("PAUSE");
     return 0;
}
