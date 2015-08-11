struct student {
	char name[20];
	int score;
};

typedef struct student ST;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
     ST stname;
	
 	strcpy(stname.name,"John");
	stname.score=90;
	
  	printf("%s的分數為%d\n", stname.name, stname.score);

	system("PAUSE");
     return 0;
}

