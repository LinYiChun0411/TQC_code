#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 char A[20];
 char B[20];
 char C[20];
 
 printf("�п�J�r��A:");
 gets(A);
 printf("�п�J�r��A����%d\n",strlen(A));
 strcpy(B,A);
 printf("�r��B:%s\n",B);
 
 printf("�п�J�r��C:");
 gets(C);
 
 
 if(strcmp(A,C)==1){
     printf("�r��A�j��r��C\n");
 }else if(strcmp(A,C)==0)
     printf("�r��A����r��C\n");
 else{
     printf("�r��A�p��r��C\n");
 }
  
 system("pause");
 return 0;
    
}
