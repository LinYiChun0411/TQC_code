#include <stdio.h>
#include <stdlib.h>

void exchange(double *,double *);
int main(){
    
     double c,d;
     printf("�п�J��ӯB�I��<�Ʀr��Ʀr�����H�ťն��j>");
     
     scanf("%lf%lf",&c,&d);
     
     printf("c:%f d:%f\n",c,d);
     exchange(&c,&d);
     printf("c:%f d:%f\n",c,d);
 
     system("pause");
     return 0;   
}
void exchange(double *c,double *d){
     double temp;
     temp=*c;
     *c=*d;
     *d=temp;
}
