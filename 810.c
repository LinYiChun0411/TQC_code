#include <stdio.h>
#include <stdlib.h>

int main(){
    int m1[3][3];
    int m2[3][3];
    printf("請輸入矩陣一...\n");
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            printf("m1[%d][%d]:",i,j);
            scanf("%d",&m1[i][j]);
        }
          
    }
     printf("請輸入矩陣二...\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            printf("m2[%d][%d]:",i,j);
            scanf("%d",&m2[i][j]);
        }
          
    }
    
    
    printf("矩陣一\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            printf("%3d",m1[i][j]);
           
        }
        printf("\n");
          
    }
    
    printf("矩陣二\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            printf("%3d",m2[i][j]);
           
        }
        printf("\n");
          
    }
    printf("矩陣三\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            printf("%3d",m1[i][j]*m2[i][j]);
           
        }
        printf("\n");
          
    }
    
    
    
    system("pause");
    return 0;    
    
}
