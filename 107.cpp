#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int a, b, c, d, e, f;
  	printf("�п�J�Ĥ@�Ӿ��? ");
	scanf("%d", &a);
	printf("�п�J�ĤG�Ӿ��? ");
	scanf("%d", &b); 	
	printf("�п�J�ĤT�Ӿ��? ");
	scanf("%d", &c);
	printf("�п�J�ĥ|�Ӿ��? ");
	scanf("%d", &d);
	printf("�п�J�Ĥ��Ӿ��? ");
	scanf("%d", &e);
	printf("�п�J�Ĥ��Ӿ��? ");
	scanf("%d", &f);
	
	printf("\n�V�k�a��\n");
	printf("%10d %10d %10d\n", a, b, c);
	printf("%10d %10d %10d", d, e, f);
	
	printf("\n\n�V���a��\n");
	printf("%-10d %-10d %-10d\n", a, b, c);
	printf("%-10d %-10d %-10d", d, e, f);

	system("PAUSE");
 	return 0;
}