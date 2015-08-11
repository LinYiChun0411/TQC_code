#include <stdio.h>
#include <stdlib.h>

struct  company {
	char name[10];
	int hour;
	double pay;
};

int main () 
{
    
	
	struct company employee[5]; 	
	double salary[5];
	int i;
    	
	for (i=0; i<5; i++) 
	{
		  printf("請輸入第%d位員工的姓名: ", i+1);
		  scanf("%s", employee[i].name);
		  printf("請輸入第%d位員工的工作時數: ", i+1);
		  scanf("%d", &employee[i].hour);
		  printf("請輸入第%d位員工一小時的工資: ", i+1);
		  scanf("%lf", &employee[i].pay);
	}
	
	for(i=0; i<5; i++)
	{
		  salary[i]=employee[i].hour * employee[i].pay;
		  printf("%-10s 的薪水為　%.2f\n", 
               employee[i].name, salary[i]);
	}

	system("PAUSE");
     return 0;
}

