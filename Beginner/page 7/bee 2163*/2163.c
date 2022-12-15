#include <stdio.h>

int main(){
    int x, y, num, indexX = 0, indexY = 0;
    scanf("%d %d", &x, &y);

    int i, j, mat[x][y];
    for(i = 0; i != x; i++){
        for(j = 0; j != y; j++){
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }

    for(i = 1; i != x - 1; i++){
        for(j = 1; j != y - 1; j++){
            if(mat[i][j] == 42){
                if(mat[i - 1][j - 1] == mat[i - 1][j] && mat[i - 1][j - 1] == mat[i - 1][j + 1] 
                        && mat[i - 1][j - 1] == mat[i][j - 1] && mat[i - 1][j - 1] == mat[i][j + 1]
                        && mat[i - 1][j - 1] == mat[i + 1][j - 1] && mat[i - 1][j - 1] == mat[i + 1][j]
                        && mat[i - 1][j - 1] == mat[i + 1][j + 1] && mat[i - 1][j - 1] == 7){
                    indexX = i;
                    indexY = j;
                    break;
                } 
            }  
        }
    }
    if(indexX == 0 && indexY == 0){
        printf("%d %d\n", indexX, indexY);
    }else{
        printf("%d %d\n", indexX + 1, indexY + 1);
    }

    return 0;
}
