#include <stdlib.h>
#include <stdio.h>



int main(){
    
    FILE *fptr;
    char name[10];
    int score;
    
    fptr=fopen("score.dat","w");
    
    
    printf("�п�J�ǥͪ��m�W(���ƿ�J�t�����Ʈɵ���):");
    scanf("%s",name);
    printf("�п�J���ǥ�C�y������:");
    scanf("%d",&score);
       
    while(score>0){
        fprintf(fptr,"%s %d\n",name,score); 
        printf("�п�J�ǥͪ��m�W(���ƿ�J�t�����Ʈɵ���):");
        scanf("%s",name);
        printf("�п�J���ǥ�C�y������:");
        scanf("%d",&score);
           
    }
    
    
    fclose(fptr);
    system("pause");
    return 0;
}
