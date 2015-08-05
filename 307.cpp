#include <stdio.h>
#include <stdlib.h>

int main()
{
	double arr2[2][3], total=0.0;
	int i, j;
	
	for (i=0; i<2; i++) 
		for (j=0; j<=2; j++) {
			printf("請輸入arr[%d][%d]的值: ", i, j);
			scanf("%lf", &arr2[i][j]);
			total += arr2[i][j];
		}
	
	printf("總和為%.2f\n", total);
	system("PAUSE");
	return 0;
}

