#include <stdio.h>
#include <stdlib.h>

int main() 
{	
	double a, b;
	printf("請輸入兩個浮點數:");
	scanf("%lf %lf", &a, &b);
	double total;
	total = a+b;
	printf("total=%f", total);
	system("PAUSE");
	return 0;
}
