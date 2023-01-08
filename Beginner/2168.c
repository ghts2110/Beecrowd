#include <stdio.h>

int main(){
    int t, c;
    scanf("%d", &t);

    int mat[t + 1][t + 1];

    int i,j;
    for(i = 0; i != t + 1; i++){
        for(j = 0; j != t + 1; j++){
            scanf("%d", &c); 
            mat[i][j] = c;
        }
    }

    for(i = 0; i != t; i++){
        for(j = 0; j != t; j++){
            int cont = 0;
            if(mat[i][j] == 1){
                cont++;
            }
            if(mat[i][j + 1] == 1){
                cont++;
            }
            if(mat[i + 1][j] == 1){
                cont++;
            }
            if(mat[i + 1][j + 1] == 1){
                cont++;
            }

            if(cont >= 2){
                printf("S");
            }else{
                printf("U");
            }
        }printf("\n");
    }

    return 0;
}
