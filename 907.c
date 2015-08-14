#include <stdio.h>
#include <stdlib.h>

struct student{
       char name[10];
       int score;       
};


char GPA(int);
int main(){
    struct student studentArr[3];
    
 
     printf("請輸入第一個學生姓名:");
     scanf("%s",studentArr[0].name);
     printf("請輸入第一個學生成績:");
     scanf("%d",&studentArr[0].score);
    
    
     printf("請輸入第二個學生姓名:");
     scanf("%s",studentArr[1].name);
     printf("請輸入第二個學生成績:");
     scanf("%d",&studentArr[1].score);
     
     printf("請輸入第三個學生姓名:");
     scanf("%s",studentArr[2].name);
     printf("請輸入第三個學生成績:");
     scanf("%d",&studentArr[2].score); 
    
    
    
     printf("第一個學生:%s\n",studentArr[0].name);
     printf("分數:%d\n",studentArr[0].score);
     printf("GPA:%c\n",GPA(studentArr[0].score));
      
    
    
     printf("第二個學生:%s\n",studentArr[1].name);
     printf("分數:%d\n",studentArr[1].score);
     printf("GPA:%c\n",GPA(studentArr[1].score));
     
     printf("第三個學生:%s\n",studentArr[2].name);
     printf("分數:%d\n",studentArr[2].score);
     printf("GPA:%c\n",GPA(studentArr[2].score));
     
     
 system("PAUSE");
 return 0;   
}
char GPA(int score){
    char GPA;
    if(score>=90)
       GPA= 'A';
    else if(score>=80)
       GPA= 'B';
    else if(score>=70)
       GPA= 'C';
    else
       GPA= 'D';
         
     return GPA;         
}
