#include <stdio.h>

int main(){
    int x, y;

    while(scanf("%d %d", &x, &y) != EOF){
        int mat[x][y], i, j;

        for(i = 0; i != x; i++){
            for(j = 0; j != y; j++){
                scanf("%d", &mat[i][j]);
            }
        }

        for(i = 0; i != x; i++){
            for(j = 0; j != y; j++){
                int cont = 0;
                if(mat[i][j] == 1){
                    printf("9");
                }else{
                    if(i - 1 >= 0 && mat[i - 1][j] == 1){
                        cont++;
                    }
                    if(i + 1 < x && mat[i + 1][j] == 1){
                        cont++;
                    }
                    if(j - 1 >= 0 && mat[i][j - 1] == 1){
                        cont++;
                    }
                    if(j + 1 < y && mat[i][j + 1] == 1){
                        cont++;
                    }

                    printf("%d", cont);
                }
            }printf("\n");
        }
    }

    return 0;
}
