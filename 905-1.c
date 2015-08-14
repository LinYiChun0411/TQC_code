#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *ptr;
    
    ptr=fopen("dnumber.dat","w");
    double number;
    
    printf("請輸入浮點數:");
    scanf("%lf",&number);
    
    while(number != -99.99){
        fprintf(ptr,"%.2f ",number);
        printf("請輸入浮點數:");
        scanf("%lf",&number);
    }
    
    fclose(ptr);
    system("pause");
    return 0;
}
