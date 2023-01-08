#include <stdio.h>
#include <string.h>

int main(){
    int t;
    while(scanf("%d", &t) != EOF){
        int op[t][3], index, i, j, cont = 0;
        char name[50], s, wrong[t][50];
        
        for(i = 0; i != t; i++){
            scanf("%d %d=%d", &op[i][0], &op[i][1], &op[i][2]);
        } 

        for(i = 0; i != t; i++){
            scanf("%s %d %c", name, &index, &s);
            index--;

            if(s == '+'){
                if(op[index][0] + op[index][1] != op[index][2]){
                    for(j = 0; j != 50; j++){
                        wrong[cont][j] = name[j];
                    }
                    cont++;
                }
            }else if(s == '-'){
                if(op[index][0] - op[index][1] != op[index][2]){
                    for(j = 0; j != 50; j++){
                        wrong[cont][j] = name[j];
                    }
                    cont++;

                }
            }else if(s == '*'){
                if(op[index][0] * op[index][1] != op[index][2]){
                    for(j = 0; j != 50; j++){
                        wrong[cont][j] = name[j];
                    }
                    cont++;

                }
            }else{
                if(op[index][0] + op[index][1] == op[index][2] 
                        || op[index][0] - op[index][1] == op[index][2] 
                        || op[index][0] * op[index][1] == op[index][2]){
                    
                    for(j = 0; j != 50; j++){
                        wrong[cont][j] = name[j];
                    }
                    cont++;

                }
            }
        }

        if(cont == 0){
            printf("You Shall All Pass!\n");
        }else if(cont == t){
            printf("None Shall Pass!\n");
        }else{
            for(i =  0; i != cont - 1; i++){
                for(j =  i + 1; j != cont; j++){
                    if(strcmp(wrong[i], wrong[j]) > 0){
                        int k;
                        for(k = 0; k != 50; k++){
                            char n = wrong[i][k];
                            wrong[i][k] = wrong[j][k];
                            wrong[j][k] = n;
                        }
                    }
                }
            }


            for(i =  0; i != cont; i++){
                printf("%s", wrong[i]);
                if(i != cont -1){
                    printf(" ");
                }
            }printf("\n");
        }
    }
    return 0;
}
