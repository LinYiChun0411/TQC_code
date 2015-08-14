#include <stdio.h>
#include <stdlib.h>

void exchange(double *,double *);
int main(){
    
     double c,d;
     printf("請輸入兩個浮點數<數字跟數字中間以空白間隔>");
     
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
