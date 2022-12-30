#include <stdio.h>

int main(){
    int t; 
    while(scanf("%d", &t) != EOF){
        int cardM, cardL, i, j;
        scanf("%d %d", &cardM, &cardL);

        int matM[cardM][t], matL[cardL][t];

        for(i = 0; i != cardM; i++){
            for(j = 0; j != t; j++){
                scanf("%d", &matM[i][j]);
            }
        }

        for(i = 0; i != cardL; i++){
            for(j = 0; j != t; j++){
                scanf("%d", &matL[i][j]);
            }
        }

        int lm, ll, c;
        scanf("%d %d %d", &lm, &ll, &c);
        

        if(matM[lm - 1][c - 1] > matL[ll - 1][c - 1]){
            printf("Marcos\n");
        }else if(matM[lm - 1][c - 1] < matL[ll - 1][c - 1]){
            printf("Leonardo\n");
        }else{
            printf("Empate\n");
        }
    }
    return 0;
}
