#include <stdio.h>
#include <stdlib.h>

int main(){
    
 int array[3][4];

 int total=0;
 int i,j;
 for(i=0;i<3;i++){
     printf("�п�J�|�ӼƦr<�Ʀr�����_�H�ťլ����j>:");
     for(j=0;j<4;j++){
         scanf("%d",&array[i][j]);
         total+=array[i][j];
     }
     printf("\n");
 }
 
 for(i=0;i<3;i++){
     for(j=0;j<4;j++){    
        printf("%d ",array[i][j]);
     }
     printf("\n");
 }
 
 printf("sum:%d\n",total);
    
 system("pause");
 return 0;   
}
