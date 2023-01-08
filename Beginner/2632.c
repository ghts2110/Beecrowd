#include <stdio.h>
#include <math.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int w, h, x0, y0, level, raio, cy, cx, dano;
        scanf("%d %d %d %d", &w, &h, &x0, &y0);

        char elemental[6];
        scanf("%s %d %d %d", elemental, &level, &cx, &cy);

        if(elemental[0] == 'f'){
            if(level == 1){ 
                raio = 20;
            }else if(level == 2){
                raio = 30;
            }else{
                raio = 50;
            }
            dano = 200;
        }else if(elemental[0] == 'w'){
            if(level == 1){
                raio = 10;
            }else if(level == 2){
                raio = 25;
            }else{
                raio = 40;
            }
            dano = 300;
        }else if(elemental[0] == 'e'){
            if(level == 1){
                raio = 25;
            }else if(level == 2){
                raio = 55;
            }else{
                raio = 70;
            }
            dano = 400;
        }else{
            if(level == 1){
                raio = 18;
            }else if(level == 2){
                raio = 38;
            }else{
                raio = 60;
            }
            dano = 100;
        }

        if((cx >= x0 + w && cy >= y0 + h) && raio >= sqrt(pow(cx - (x0 + w), 2) + pow(cy - (y0 + h), 2))){
            printf("%d\n", dano);
        }else if((cx >= x0 + w && cy <= y0 + h && cy >= y0) && (cx - raio <= x0 + w)){
            printf("%d\n", dano);
        }else if((cx >= x0 + w && cy <= y0) && raio >= sqrt(pow(cx - (x0 + w), 2) + pow(y0 - cy, 2))){
            printf("%d\n", dano);
        }else if((cx <= x0 + w && cx >= x0 && cy <= y0) && (cy + raio >= y0)){
            printf("%d\n", dano);
        }else if((cx <= x0 && cy <= y0) && raio >= sqrt(pow(x0 - cx, 2) + pow(y0 - cy, 2))){
            printf("%d\n", dano);
        }else if((cx <= x0 && cy <= y0 + h && cy >= y0) && (cx + raio >= x0)){
            printf("%d\n", dano);
        }else if((cx <= x0 && cy >= y0 + h) && raio >= sqrt(pow(x0 - cx, 2) + pow(cy - (y0 + h), 2))){
            printf("%d\n", dano); 
        }else if((cx <= x0 + w && cx >= x0 && cy >= y0 + h) && (cy - raio <= y0 + h)){
            printf("%d\n", dano);
        }else if(cx <= x0 + w && cx >= x0 && cy <= y0 + h && cy >= y0){
            printf("%d\n", dano);
        }else{
            printf("0\n");
        }
    }

    return 0;
}

