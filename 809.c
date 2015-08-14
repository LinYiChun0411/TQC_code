#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

void sorting(int [],int);
int main(){
    int arr[15];
    int arr2[5][3];
    int i,j;
    printf("½Ð¿é¤J...\n");
    for(i=0;i<15;i++){
        printf("arr[%d]:",i);               
        scanf("%d",&arr[i]);
    }
    
    sorting(arr,15);
    
    printf("¦C¥X°}¦C\n");
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            arr2[i][j]=arr[i*3+j];
        }
    }
    
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("arr2[%d][%d]=%d\n",i,j,arr2[i][j]);
        }
    }
    
    system("pause");
    return 0;    
}


//Selection Sort 
void sorting(int arr[],int length){
 int i,j,min,temp;
 for(i=0;i<length-1;i++){
     min=i;
     for(j=i+1;j<length;j++){
         if(arr[j]<arr[min])
             min=j;
     }
     SWAP(arr[i],arr[min],temp);
       
 }    
     
}
