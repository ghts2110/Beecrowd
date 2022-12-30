#include <stdio.h>

int main(){
    int n, id, cont;
    
    while(scanf("%d %d", &n, &id) != EOF){
        cont = 0;
        while(n--){
            int server, game;
            scanf("%d %d", &server, &game);
            if(server == id && game == 0){
                cont++;
            }
        }

        printf("%d\n", cont);
    }
    return 0;
}
