#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    
    ptr=fopen("dnumber.dat","w");
    double number;
    
    printf("�п�J�B�I��:");
    scanf("%lf",&number);
    
    while(number != -99.99){
        fprintf(ptr,"%.2f ",number);
        printf("�п�J�B�I��:");
        scanf("%lf",&number);
    }
    
    fclose(ptr);
    system("pause");
    return 0;
}
