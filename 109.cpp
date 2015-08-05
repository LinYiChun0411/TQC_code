#include <stdio.h>
#include <stdlib.h>

int main () {
	int score;
	
	printf("叫块眤だ计: ");
	scanf("%d", &score);
	if (60<=score&&score<=100) {
		printf("の");
	}
	else {
		printf("ぃの");
	}
	
	int x;
	printf("\n\n叫块x: ");
	scanf("%d", &x);
	if (x%2 == 0) {
		 printf("%d琌案计", x);
	}
	else {
		 printf("%d琌计", x);
	}

	system("PAUSE");
	return 0;
}
