#include <stdlib.h>
#include <stdio.h>



int main(){
    
    FILE *fptr;
    char name[10];
    int score;
    
    fptr=fopen("score.dat","w");
    
    
    printf("請輸入學生的姓名(分數輸入負的分數時結束):");
    scanf("%s",name);
    printf("請輸入此學生C語言分數:");
    scanf("%d",&score);
       
    while(score>0){
        fprintf(fptr,"%s %d\n",name,score); 
        printf("請輸入學生的姓名(分數輸入負的分數時結束):");
        scanf("%s",name);
        printf("請輸入此學生C語言分數:");
        scanf("%d",&score);
           
    }
    
    
    fclose(fptr);
    system("pause");
    return 0;
}
