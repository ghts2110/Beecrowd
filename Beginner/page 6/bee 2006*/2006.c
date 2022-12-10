#include <stdio.h>

int main(){
    int tea, t = 5, cont = 0;
    scanf("%d", &tea);
    while(t--){
        int answer;
        scanf("%d", &answer);
        if(answer == tea){
            cont++;
        }
    }
    printf("%d\n", cont);
    return 0;
}
