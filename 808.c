#include <stdio.h>
#include <stdlib.h>

void sorting(int[],int);
int main(){
 int scoredata[10];
 int i;
 
 printf("請輸入十個數...\n");
 for(i=0;i<10;i++){
     printf("第 %d 個:",i+1);
     scanf("%d",&scoredata[i]);
 }
 printf("排序前:");
 for(i=0;i<10;i++){
     printf("%2d ",scoredata[i]);
 }
 printf("\n");
 sorting(scoredata,10); 
 
 printf("排序後:");
 for(i=0;i<10;i++){
     printf("%2d ",scoredata[i]);
 }
 printf("\n");    
  
 system("pause");
 return 0;  
}

void sorting(int array[],int length){
    int i,j;
  
    for(j=0;j<length-1;j++){
        for(i=0;i<length-1-j;i++){
            if(array[i]>array[i+1])//swap
            {
                int temp;
                temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }                
        }
    }  
     
}
