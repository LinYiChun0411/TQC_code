#include <stdio.h>
#include <stdlib.h>


void multiply(int);
void printStar(int);

int main(){
 int number,starNum;
 
 printf("�п�J�z�n�X�ӴX�����k��<�̦h10>:");
 scanf("%d",&number);
 printf("�п�J�z�n�X�ӬP�P<*>:");
 scanf("%d",&starNum);
 
 printStar(starNum);
 if(number<=10){
     multiply(number);     
 }
 printStar(starNum);
 
 system("pause");
 return 0;   
}

void multiply(int number){
     int i,j;
     for(i=1;i<=number;i++){
         for(j=1;j<=number;j++){
             printf("%2d ",i*j);
         }
         printf("\n");
     }     
   
}
void printStar(int starNum){
     int i;
     for(i=0;i<starNum;i++){
          printf("*");          
     }
     printf("\n");
} 
