#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int i, total=0; 
	for (i=1; i<=100; i++){
        if(i%2==0)
          total += i;
    }
	printf("1到100的偶數和: %d\n", total);
	system("PAUSE");
    return 0;
}

