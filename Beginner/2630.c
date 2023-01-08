#include <stdio.h>

int main(){
    int t, cont = 0;
    scanf("%d", &t);

    while(t--){
        cont++;
        char comand[5];
        int r, g, b, p;

        scanf("%s", comand);
        scanf("%d %d %d", &r, &g, &b); 

        if(comand[0] == 'e'){
            p = (r * 0.3) + (g * 0.59) + (b * 0.11);
        }else if(comand[1] == 'a'){
            p = 0;
            if(r > p){
                p = r;
            }
            if(g > p){
                p = g;
            }
            if(b > p){
                p = b;
            }
        }else if(comand[1] == 'i'){
            p = 255;
            if(r < p){
                p = r;
            }
            if(g < p){
                p = g;
            }
            if(b < p){
                p = b;
            }
        }else{
            p = (r + g + b)/3;
        }

        printf("Caso #%d: %d\n", cont, p);
    }

    return 0;
}
