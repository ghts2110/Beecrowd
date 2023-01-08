#include <stdio.h>

int main(){
    char n1[11] = "-----------", n2[33];
    int caso = 0;
    while(scanf("%s %s", n1, n2) != EOF){
        caso++;
        int i, j, cont = 0, inicio = 0, equal = 0, c, index, pos = 0;
        for(i = 0; i != 11; i++){
            if(n1[i] == '-'){
                break;
            } 
            cont++;
        }
        cont -= 2;
 
        for(i = cont; i != 33; i++){
            index = c = 0;
            for(j = inicio; j != i + 1; j++){
                if(n1[index] == n2[j]){
                    index++;
                    c++;
                }
            }
            if(c == cont + 1){
                pos = i - (cont - 1);
                equal++;
            }
            inicio++;
        }
        
        printf("Caso #%d:\n", caso);
        if(equal == 0){
            printf("Nao existe subsequencia\n");
        }else{
            printf("Qtd.Subsequencias: %d\n", equal);
            printf("Pos: %d\n", pos);
        }
        printf("\n");

        for(i = 0; i != 11; i++){
            n1[i] = '-';
        }
    }
    return 0;
}
