#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int a, b, c;
  	printf("�п�J�ܼ�a����: ");
	scanf("%d", &a);
	printf("�п�J�ܼ�b����: ");
	scanf("%d", &b);  
	printf("�п�J�ܼ�c����: ");
	scanf("%d", &c);
	
	//�P�_a�O�_�j�󵥩�60�B�p��100�A�Y�O�A�h��X1, �_�h�A��X0
	printf("%d\n", 60<=a && a<100);
	
	//���Nb�[1��A�A���H10.
	printf("%f\n", ++b/10.);
	
	//�P�_a�O�_�j��c�A�Y�O�A�h�L�Xa�A�_�h�A�L�Xc
	printf("%d\n", a>c?a:c);
	
	system("PAUSE");
 	return 0;
}