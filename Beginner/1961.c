#include <stdio.h>
#include <stdlib.h>

int main(){
    int P, t, win = 0, fist, last;
    scanf("%d %d", &P, &t);

    scanf("%d", &fist);
    t--;
    while(t--){ 
        scanf("%d", &last);
        if(fist + P < last || abs(fist - last) > P){
            win = 1; 
        }

        fist = last;
    }

    if(win == 0){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }
    return 0;
}
