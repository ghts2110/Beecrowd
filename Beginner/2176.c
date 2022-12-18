#include <stdio.h>

int main(){
    char n[100];
    int num, cont = 0;
    scanf("%[^\n\r]", n);
    
    printf("%s", n);
    int i;
    for(i = 0; i != sizeof(n); i++){
        if(n[i] == '1'){
            cont++;
        }
    }

    if(cont % 2 == 0){
        printf("0\n");
    }else{
        printf("1\n");
    }
    return 0;
}
