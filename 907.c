#include <stdio.h>
#include <stdlib.h>

struct student{
       char name[10];
       int score;       
};


char GPA(int);
int main(){
    struct student studentArr[3];
    
 
     printf("�п�J�Ĥ@�Ӿǥͩm�W:");
     scanf("%s",studentArr[0].name);
     printf("�п�J�Ĥ@�Ӿǥͦ��Z:");
     scanf("%d",&studentArr[0].score);
    
    
     printf("�п�J�ĤG�Ӿǥͩm�W:");
     scanf("%s",studentArr[1].name);
     printf("�п�J�ĤG�Ӿǥͦ��Z:");
     scanf("%d",&studentArr[1].score);
     
     printf("�п�J�ĤT�Ӿǥͩm�W:");
     scanf("%s",studentArr[2].name);
     printf("�п�J�ĤT�Ӿǥͦ��Z:");
     scanf("%d",&studentArr[2].score); 
    
    
    
     printf("�Ĥ@�Ӿǥ�:%s\n",studentArr[0].name);
     printf("����:%d\n",studentArr[0].score);
     printf("GPA:%c\n",GPA(studentArr[0].score));
      
    
    
     printf("�ĤG�Ӿǥ�:%s\n",studentArr[1].name);
     printf("����:%d\n",studentArr[1].score);
     printf("GPA:%c\n",GPA(studentArr[1].score));
     
     printf("�ĤT�Ӿǥ�:%s\n",studentArr[2].name);
     printf("����:%d\n",studentArr[2].score);
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
