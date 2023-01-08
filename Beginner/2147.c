#include <stdio.h>

int main(){
    int t;
    char galopeira[10000];
    scanf("%d", &t);
    while(t--){

        int i;
        for(i = 0; i != 10000; i++){ 
            galopeira[i]='-';
        }

        scanf("%s", galopeira);
        float cont = 0;

        for(i = 0; i != 10000; i++){
            if(galopeira[i] == 'e'){
                cont += 0.01;
            }
        }

        printf("%.2f\n", cont + 0.08);

    }
    return 0;
}
