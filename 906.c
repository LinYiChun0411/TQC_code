#include <stdio.h>
#include <stdlib.h>


struct student{
       char name[10];
       int score;
};
int main(){
    
    struct student studentArr[5];
    int i;
    for(i=0;i<5;i++){
                     printf("�п�J��%d��P�Ǫ��m�W:",i+1);
                     scanf("%s",studentArr[i].name);
                     printf("�п�J��%d��P��C�y��������:",i+1);
                     scanf("%d",&studentArr[i].score);
    }
    
    
    for(i=0;i<5;i++){
                     printf("%-10s %10d\n",studentArr[i].name,studentArr[i].score);
    }
    
    system("pause");
    return 0;
}
