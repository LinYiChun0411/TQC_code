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
 
 printf("�п�J�Ĥ@��ǥͩm�W:");
 scanf("%s",a->name);
 printf("����:"); 
 scanf("%d",&a->score);
 
 
 printf("�п�J�ĤG��ǥͩm�W:");
 scanf("%s",b->name);
 printf("����:"); 
 scanf("%d",&b->score);
 
 printf("�п�J�ĤT��ǥͩm�W:");
 scanf("%s",c->name);
 printf("����:"); 
 scanf("%d",&c->score);
 
 
 
 
 a->next=b;
  b->next=c;
   c->next=NULL;
   
 current=a;
 
 printf("��X...\n");
 while(current!=NULL)
 {
     printf("�ǥ�:%s\n",current->name);
     printf("����:%d\n\n",current->score);
     current=current->next;
    
 }
 
   
 free(a);
 free(b);
 free(c);
 system("pause");
 return 0;
    
}
