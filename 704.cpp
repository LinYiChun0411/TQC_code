#include <stdio.h>
#include <stdlib.h>
#define TRIPLE(x) (x)*(x)*(x)
int main () 
{
	int num, triple_num;
	printf("請輸入一個整數: ");
	scanf("%d", &num);
	
	triple_num = TRIPLE(num);
	printf("%d的三次方為%d\n",num ,triple_num);
	
	triple_num = TRIPLE(4+1);
	printf("5的三次方為%d\n", triple_num);

	system("PAUSE");
     return 0;
}
