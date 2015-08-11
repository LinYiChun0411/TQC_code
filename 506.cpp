struct circle {
	int x, y;
	double radius;
};

double callarea(struct circle *pr);

#include <stdio.h>
#include <stdlib.h>

int main () 
{	
	double area;
	struct circle c1={10, 10, 8.5};
 	
	area = callarea(&c1);
	
	printf("此圓的圓心為(%d,　%d), 半徑為%.2f, 面積為%.2f\n", 
                c1.x, c1.y, c1.radius, area);
	system("PAUSE");
     return 0;
}

double callarea(struct circle *pr)
{
	int area;
	area = pr->radius * pr->radius * 3.14159;
	return area;
}
