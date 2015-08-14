#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 char A[20];
 char B[20];
 char C[20];
 
 printf("請輸入字串A:");
 gets(A);
 printf("請輸入字串A長度%d\n",strlen(A));
 strcpy(B,A);
 printf("字串B:%s\n",B);
 
 printf("請輸入字串C:");
 gets(C);
 
 
 if(strcmp(A,C)==1){
     printf("字串A大於字串C\n");
 }else if(strcmp(A,C)==0)
     printf("字串A等於字串C\n");
 else{
     printf("字串A小於字串C\n");
 }
  
 system("pause");
 return 0;
    
}
