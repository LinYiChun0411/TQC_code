#include <stdio.h>
#include <stdlib.h>

struct company {
	char name[10];
	int hour;
	double pay;
};
int main () 
{

	struct company employee[5]={
	   "John", 20, 100.34,
	   "Mary", 30, 99.78,
	   "Peter", 25, 89.45, 
	   "Nancy", 33, 87.42,
	   "Tom", 54, 77.89
	};
	
	double salary[5];
	int i;
	for(i=0; i<5; i++)
	{
	 salary[i] = employee[i].hour * employee[i].pay;
	 printf("%-10s ���~�����@%.2f\n", 
                employee[i].name, salary[i]);
	}
 	
	system("PAUSE");
     return 0;
}
