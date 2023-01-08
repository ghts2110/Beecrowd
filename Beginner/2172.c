#include <stdio.h>

int main(){
    int x, xp;
    while(1){
        scanf("%d %d", &x, &xp);
        if(x == 0 && xp == 0){
            break;
        }

        printf("%d\n", x * xp);
    } 
    return 0;
}
