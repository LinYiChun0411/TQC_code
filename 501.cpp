#include <stdio.h>
#include <stdlib.h>

int main () 
{
    struct  student {
		char name[10];
		int score;
	};
	
	struct student st1;
	
	printf("�п�J�m�W:");
	scanf("%s", st1.name);
    
	printf("�п�J����:");
	scanf("%d", &st1.score);
	
	printf("%s�����Z�O%d\n", st1.name, st1.score);
	
	if (st1.score >= 60)
      printf("���߱z�q�L�F");
	else {
      printf("��p�z�Q���F");
	}

	system("PAUSE");
   return 0;
}