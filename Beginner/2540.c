#include <stdio.h>

int main(){
    float t;

    while(scanf("%f", &t) != EOF){
        int cont = 0;
        float min = (2*t)/3; 

        while(t--){
            int n; 
            scanf("%d", &n);
            cont += n;
        }

        if(cont >= min){
            printf("impeachment\n");

        }else{
            printf("acusacao arquivada\n");
        }
    }
    return 0;
}
