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
                     printf("請輸入第%d位同學的姓名:",i+1);
                     scanf("%s",studentArr[i].name);
                     printf("請輸入第%d位同學C語言的分數:",i+1);
                     scanf("%d",&studentArr[i].score);
    }
    
    
    for(i=0;i<5;i++){
                     printf("%-10s %10d\n",studentArr[i].name,studentArr[i].score);
    }
    
    system("pause");
    return 0;
}
