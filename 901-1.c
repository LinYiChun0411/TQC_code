#include <stdio.h>
#include <stdlib.h>



void exchange(int *, int *);
int main(){
  int a,b;
  printf("請輸入兩個數字<數字跟數字中間請以空白間隔>");;
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
