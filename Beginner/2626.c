#include <stdio.h>

int main(){
    char dodo[8], leo[8], pepper[8];
    while(scanf("%s %s %s", dodo, leo, pepper) != EOF){
        int d, l, p;

        if(dodo[0] == 't'){
            d = 3;
        }else if(dodo[1] == 'a'){
            d = 2;
        }else{
            d = 1;
        }

        if(leo[0] == 't'){
            l = 3;
        }else if(leo[1] == 'a'){
            l = 2;
        }else{
            l = 1;
        }

        if(pepper[0] == 't'){
            p = 3;
        }else if(pepper[1] == 'a'){
            p = 2;
        }else{
            p = 1;
        }   
        
        if((d == l && ((d == 3 && p == 1) || (d == 2 && p == 3) || (d == 1 && p == 2)))){
            printf("Urano perdeu algo muito precioso...\n");
        }else if(d == p && ((d == 3 && l == 1) || (d == 2 && l == 3) || (d == 1 && l == 2))){
            printf("Iron Maiden's gonna get you, no matter how far!\n");
        }else if(p == l && ((d == 1 && l == 3) || (d == 3 && l == 2) || (d == 2 && l == 1))){
            printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n");
        }else{
            printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
        }
    }
    return 0;
}
