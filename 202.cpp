#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int score, adjust;
	printf("�п�J����:");
	scanf("%d", &score);
	if (score >= 60)
	    adjust = score+10;
	else 
	    adjust = score+5;
	printf("�վ�᪺���Ƭ�%d", adjust);
	
	system("PAUSE");
	return 0;
}