#include <stdio.h>
#include <string.h>

int main(){
    int t1, i, t2, j;
    scanf("%d", &t1);
    char n[t1][101];

    for(i = 0; i != t1; i++){
        scanf("%s", n[i]);
    }
   
    scanf("%d", &t2);

    while(t2--){ 
        int cont, equal = 0, max = 0;
        char search[101], nu;
        scanf("%c", &nu);
        scanf("%[^\n\r]", search);

        for(i = 0; i != t1; i++){
            cont = 0;
            for(j = 0; j != strlen(search); j++){
                if(search[j] == n[i][j]){
                    cont++;
                }else{
                    break;
                }
            }

            if(cont == strlen(search)){
                if(strlen(n[i]) > max){
                    max = strlen(n[i]);
                }
                equal++;
            }
        }
        if(equal == 0){
            printf("-1\n");
        }else{
            printf("%d %d\n", equal, max);
        }
    }
    return 0;
}
