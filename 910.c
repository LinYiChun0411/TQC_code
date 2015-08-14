#include <stdio.h>
#include <stdlib.h>

struct node{
    char name[10];
    int score;
    struct node *next;
};



int main(){
 struct node *a,*b,*c,*current;
 
 a = (struct node *) malloc(sizeof(struct node));
 b = (struct node *) malloc(sizeof(struct node));
 c = (struct node *) malloc(sizeof(struct node));
 
 printf("請輸入第一位學生姓名:");
 scanf("%s",a->name);
 printf("分數:"); 
 scanf("%d",&a->score);
 
 
 printf("請輸入第二位學生姓名:");
 scanf("%s",b->name);
 printf("分數:"); 
 scanf("%d",&b->score);
 
 printf("請輸入第三位學生姓名:");
 scanf("%s",c->name);
 printf("分數:"); 
 scanf("%d",&c->score);
 
 
 
 
 a->next=b;
  b->next=c;
   c->next=NULL;
   
 current=a;
 
 printf("輸出...\n");
 while(current!=NULL)
 {
     printf("學生:%s\n",current->name);
     printf("分數:%d\n\n",current->score);
     current=current->next;
    
 }
 
   
 free(a);
 free(b);
 free(c);
 system("pause");
 return 0;
    
}
