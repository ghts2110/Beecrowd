#include <stdio.h>

int main(){
    int t, cont = 0;
    while(scanf("%d", &t) != EOF){
        int i, num = 0; 
        for(i = 0; i != t + 1; i++){
            num += i;
        }
        cont++;
        if(t == 0){
            printf("Caso %d: %d numero\n", cont, num + 1);
        }else{
            printf("Caso %d: %d numeros\n", cont, num + 1);
        }
        int SequenceP = 0;
        if(SequenceP == 0){
            printf("%d", SequenceP);
            SequenceP++;
        }
        while(t--){
            for(i = 0; i != SequenceP; i++){
                printf(" %d", SequenceP);
            }
            SequenceP++;
        }
        printf("\n\n");
    }
}
