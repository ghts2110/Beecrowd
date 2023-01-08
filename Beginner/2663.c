#include <stdio.h>

int main(){
    int t, min;
    scanf("%d %d", &t, &min);
    
    int mat[t], i, j, value = min;
    for(i = 0; i != t; i++){
        scanf("%d", &mat[i]);
    }

    for(i = 0; i != t - 1; i ++){
        for(j = i + 1; j != t; j++){
            if(mat[i] < mat[j]){
                int d = mat[i];
                mat[i] = mat[j];
                mat[j] = d;
            }
        }
    }
    
    while(1){
        if(mat[min] == mat[min - 1]){
            min++;
            value++;
        }else{
            break;
        }
    }

    printf("%d\n", value);
    return 0;
}
