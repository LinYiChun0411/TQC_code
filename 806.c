#include <stdio.h>
#include <stdlib.h>


void multiply(int num);
void printStar(int starNum);

int main(){
    int num,starNum;
    printf("�п�J�z�n�X�ӴX���Ӫk��<�̦h10>:");
    scanf("%d",&num);
    printf("�п�J�z�n�h�֭ӬP�P<*>:");
    scanf("%d",&starNum);
    printStar(starNum);
    if(num <= 10)
    {
           multiply(num);
    }
    printStar(starNum);
    system("pause");
    return 0;
    
    
    
}

void multiply(int num){
     int i,j;
     for(i=1;i<=num;i++){
          for(j=1;j<=num;j++){
                printf("%d* %d=%2d  ",i,j,i*j);
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
