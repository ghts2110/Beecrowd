#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char j1[7], j2[7];
        scanf("%s %s", j1, j2);
        if(j1[0] == 'a' && j2[0] != 'a'){
            printf("Jogador 1 venceu\n"); 
        }else if(j1[0] != 'a' && j2[0] == 'a'){
            printf("Jogador 2 venceu\n");
        }else if(j1[0] == 'a' && j2[0] == 'a'){
            printf("Aniquilacao mutua\n");
        }else if(j1[1] == 'e' && j2[1] != 'e'){
            printf("Jogador 1 venceu\n");
        }else if(j1[1] != 'e' && j2[1] == 'e'){
            printf("Jogador 2 venceu\n");
        }else if(j1[1] == 'e' && j2[1] == 'e'){
            printf("Sem ganhador\n");
        }else{
            printf("Ambos venceram\n");
        }

    }
    return 0;
}
