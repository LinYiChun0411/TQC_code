#include <stdio.h>
#include <stdlib.h>

int main () {
	int score;
	
	printf("�п�J�z������: ");
	scanf("%d", &score);
	if (60<=score&&score<=100) {
		printf("�ή�");
	}
	else {
		printf("���ή�");
	}
	
	int x;
	printf("\n\n�п�Jx��: ");
	scanf("%d", &x);
	if (x%2 == 0) {
		 printf("%d�O����", x);
	}
	else {
		 printf("%d�O�_��", x);
	}

	system("PAUSE");
	return 0;
}