#include <stdio.h>

int main(){
    int abas, t;
    scanf("%d %d", &abas, &t);
    while(t--){
        char cod[7];
        scanf("%s", cod);
        if(cod[0] == 'f'){
            abas++;
        }else{
            abas--;
        } 
        if(abas < 0){
            abas = 0;
        }
    }
    printf("%d\n", abas);
    return 0;
}
