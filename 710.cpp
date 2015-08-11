#include <stdio.h>
#include <stdlib.h>
/* 若沒有定義Knum, 則加以定義為1000 */
#ifndef Knum
#define Knum 1000
#endif
/* 將Knum解除定義, 之後再定義為200 */
#undef Knum
#define Knum 200

int main () 
{
	/* 印出最後的Knum值 */
	printf("Knum = %d\n", Knum);
	
	/* 下列的變數d和i共用8個Bytes, 不是12個Bytes */
	union dataType {
		double d;
		int	 i;
	};
    dataType dT;
    
	printf("請輸入d的變數值: ");
	scanf("%lf", &dT.d); 	
	/* 印出dT變數中的d */
	printf("%f", dT.d);
	
	printf("請輸入i的變數值: ");
	scanf("%d", &dT.i); 
	printf("%d\n", dT.i);	
	
	system("PAUSE");
	return 0;
}
