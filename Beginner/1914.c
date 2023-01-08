#include <stdio.h>
#include <string.h>

int main(){
    int t, value1, value2;
    char nome1[10], nome2[10], escolha1[6], escolha2[6];
    scanf("%d", &t);
    while(t--){
        scanf("%s %s %s %s", nome1, escolha1, nome2, escolha2); 
        scanf("%d %d", &value1, &value2);
            
        if(strcmp(escolha1, "PAR") == 0 && (value1 + value2) % 2 == 0){
            printf("%s\n", nome1);
        }else if(strcmp(escolha1, "IMPAR") == 0 && (value1 + value2) % 2 == 1){
            printf("%s\n", nome1);
        }else{
            printf("%s\n", nome2);
        }
    }
    return 0;
}
