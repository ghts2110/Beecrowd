#include <stdio.h>

int main(){
    int t;
    
    while(scanf("%d", &t) != EOF){
        int value = 0, p, mat[t], i;
        for(i = 0; i != t; i++){
            scanf("%d", &mat[i]);
        }
        
        scanf("%d", &p);

        for(i = t - 1; i >= 0; i -= p){
            value += mat[i];
        }

        int cont = 0;
        for(i = 1; i != value + 1; i++){
            if(value % i == 0){
                cont++;    
            } 
        }

        if(cont == 2){
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }else{
            printf("Bad boy! I’ll hit you.\n");
        }
    }
    return 0;
}
