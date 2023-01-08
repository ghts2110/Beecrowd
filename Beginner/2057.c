#include <stdio.h>

int main(){
    int hora, tempo, fuso, final;
    scanf("%d %d %d", &hora, &tempo, &fuso);
    final = hora + tempo + fuso;
    if(final >= 24){
        final -= 24;
    }else if(final < 0){
        final += 24;
    }

    printf("%d\n", final);
    return 0;
} 
