#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    
    ptr=fopen("dnumber.dat","r");
    double number;
      
    while(fscanf(ptr,"%lf ",&number)!=EOF){
        printf("%.2f \n",number);     
    }
    
    fclose(ptr);
    system("pause");
    return 0;
}
