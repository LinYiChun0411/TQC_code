#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    ptr=fopen("score.dat","r");
    char name[10];
    int score;
    while(fscanf(ptr,"%s %d",name,&score)!=EOF)
    {
        printf("%s��C�y�����ƬO%d\n",name,score);
    }
    fclose(ptr);
    system("pause");
    return 0;
}
