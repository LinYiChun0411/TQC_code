#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int a, b, c;
  	printf("請輸入變數a的值: ");
	scanf("%d", &a);
	printf("請輸入變數b的值: ");
	scanf("%d", &b);  
	printf("請輸入變數c的值: ");
	scanf("%d", &c);
	
	//判斷a是否大於等於60且小於100，若是，則輸出1, 否則，輸出0
	printf("%d\n", 60<=a && a<100);
	
	//先將b加1後，再除以10.
	printf("%f\n", ++b/10.);
	
	//判斷a是否大於c，若是，則印出a，否則，印出c
	printf("%d\n", a>c?a:c);
	
	system("PAUSE");
 	return 0;
}
