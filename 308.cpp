#include <stdio.h>
#include <stdlib.h>

double sum(double a[], int n);
int main () 
{
	double arr[5];
	int i;
    double total;
	
	for(i=0; i<5; i++) {
		  printf("�п�J�}�Carr[%d]������: ", i);
		  scanf("%lf", &arr[i]);
	}
	
	for(i=0; i<5; i++)
		  printf("arr[%d]=%.2f\n", i, arr[i]);
	
	total=sum(arr,5);
	printf("���}�C���`�M��%.2f\n", total);
	system("PAUSE");
	return 0;
}

double sum(double a[], int n)
{
	int k;
	double tot=0;
	for(k=0; k<n; k++)
        tot += a[k];
	return tot;
}
