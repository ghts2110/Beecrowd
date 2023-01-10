#include <stdio.h>

int main(){
    int t = 9, s = 0;

    while(t--){
        int n;
        scanf("%d", &n);
        s += n;
    }

    if(s % 9 == 1){
        printf("Dasher\n");
    }else if(s % 9 == 2){
        printf("Dancer\n");
    }else if(s % 9 == 3){
        printf("Prancer\n");
    }else if(s % 9 == 4){
        printf("Vixen\n");
    }else if(s % 9 == 5){
        printf("Comet\n");
    }else if(s % 9 == 6){
        printf("Cupid\n");
    }else if(s % 9 == 7){
        printf("Donner\n");
    }else if(s % 9 == 8){
        printf("Blitzen\n");
    }else{
        printf("Rudolph\n");
    }

    return 0;
}
