#include <stdio.h>
#include <stdlib.h>

int main()
{
    
 int array[5][2];
 int i,j;
 int sum=0;
 for(i=0;i<5;i++)
 {
     printf("請輸入兩數字<數字跟數字之間請以空白間隔>:");
     for(j=0;j<2;j++)
     {
        scanf("%d",&array[i][j]);
        sum+=array[i][j];
     }
      printf("\n");    
 }
 for(i=0;i<5;i++)
 {  
     for(j=0;j<2;j++)
     {
        printf("%d ",array[i][j]);
     }
     printf("\n");
 }
 
 printf("sum:%d\n",sum);
 system("pause");
 return 0;
}     
