#include <stdio.h>
#include <stdlib.h>

int main(){
 
 int i,j;
 
 for(i=0;i<5;i++)
 {
     for(j=5;j>i;j--)
     {
                     printf("*");
     }
     printf("\n");
 }

 system("pause");
 return 0;   
}
