#include <stdio.h>

int main(){
    int t, i, j, cont;
    while(scanf("%d", &t) != EOF){
        cont = i = 0;
        int mat[t][3], index;
        char name[50], op, name_n[t][50];

        j = t;
        while(j--){
            scanf("%d %d=%d", &mat[i][0], &mat[i][1], &mat[i][2]);
            i++;
        }

        j = t;
        while(j--){
            scanf("%s %d %c", name, &index, &op);
            index--;

            if(op == '+'){
                if(mat[index][0] + mat[index][1] != mat[index][2]){
                    cont++;
                    
                }
            }else if(op == '-'){
                if(mat[index][0] - mat[index][1] != mat[index][2]){
                    cont++;

                }
            }else if(op == '*'){
                if(mat[index][0] * mat[index][1] != mat[index][2]){
                    cont++;

                }
            }else{
                if(mat[index][0] / mat[index][1] != mat[index][2]){
                    cont++;

                }
            }
        }

        if(cont == 0){
            printf("You Shall All Pass!\n");
        }else if(cont == t){
            printf("None Shall Pass!\n");
        }else{

        }
    }
    return 0;
}
