#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	double x, y;
	double result;
	printf("½Ð¿é¤Jx, yªº­È: ");
	scanf("%lf %lf", &x, &y);
    
	result=exp(5.0) *  sqrt( ( pow(x, y)+log(100.0) ) )  / pow(x, 2) * pow(y, 3);
	printf("result=%f\n", result);
	system("PAUSE");
     return 0;
}
