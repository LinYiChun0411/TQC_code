#include <stdio.h>
#include <stdlib.h>

int main () {
	int score;
	
	printf("請輸入您的分數: ");
	scanf("%d", &score);
	if (60<=score&&score<=100) {
		printf("及格");
	}
	else {
		printf("不及格");
	}
	
	int x;
	printf("\n\n請輸入x值: ");
	scanf("%d", &x);
	if (x%2 == 0) {
		 printf("%d是偶數", x);
	}
	else {
		 printf("%d是奇數", x);
	}

	system("PAUSE");
	return 0;
}
