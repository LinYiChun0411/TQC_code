#include <stdio.h>
#include <stdlib.h>



void exchange(int *, int *);
int main(){
  int a,b;
  printf("�п�J��ӼƦr<�Ʀr��Ʀr�����ХH�ťն��j>");;
  scanf("%d %d",&a,&b);
  printf("a:%d b:%d\n",a,b);
  exchange(&a,&b);
  printf("a:%d b:%d\n",a,b);
  system("pause");
  return 0;   
}

void exchange(int *a, int *b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
}
