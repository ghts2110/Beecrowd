#include <stdio.h>
int main(){
    int p, j1, j2, r, a;
    scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
    if((r == 1 && a == 0) || (r == 0 && a == 1)){
        printf("Jogador 1 ganha!\n");
    }else if(r == 1 && a == 1){
        printf("Jogador 2 ganha!\n");
    }else{
        int odd_even = (j1 + j2) % 2;
        if(p == 1 && odd_even == 0){
            printf("Jogador 1 ganha!\n");
        }else if(p == 0 && odd_even == 1){
            printf("Jogador 1 ganha!\n");
        }else{
            printf("Jogador 2 ganha!\n");
        }
    }
    return 0;
}
