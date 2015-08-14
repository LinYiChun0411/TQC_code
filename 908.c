#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define random(x) rand()%1000 + 1 

int main(){
    srand(time(NULL));
    int i;
    for(i=0;i<100;i++)
    {
        printf("%3d  ", random());
        if((i+1)%10==0){
            printf("\n");
        }
      
    }
    system("pause");
    return 0;   
}
