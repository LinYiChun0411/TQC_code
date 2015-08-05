#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int i=2, total=0; 
	do {
	
	   total += i;
	   i+=2;
	} while (i<=100);
	
     printf("1到100的偶數和: %d\n", total);
	system("PAUSE");
     return 0;
}
