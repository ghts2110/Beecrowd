#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    while(scanf("%d %d", &x, &y) != EOF){
        int i, j, indexXP, indexYP, indexXT, indexYT; 
        
        for(i = 0; i != x; i++){
            for(j = 0 ; j != y; j++){
                int num;
                scanf("%d", &num);

                if(num == 2){
                    indexXP = i;
                    indexYP = j;
                }else if(num == 1){
                    indexXT = i;
                    indexYT = j;
                }
            }
        }
        
        int d = abs(indexXP - indexXT) + abs(indexYP - indexYT);
        printf("%d\n", d);

    }
    return 0;
}
