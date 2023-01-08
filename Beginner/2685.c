#include <stdio.h>

int main(){
    int t;
    
    while(scanf("%d", &t) != EOF){
        if(t < 90 || t >= 360){
            printf("Bom Dia!!\n");
        }else if(t < 180){
            printf("Boa Tarde!!\n");
        }else if(t < 270){
            printf("Boa Noite!!\n");
        }else{
            printf("De Madrugada!!\n");
        }
    }

    return 0;
}
