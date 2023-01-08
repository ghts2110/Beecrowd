#include <stdio.h>

int main(){
    int finish = 6, value = 0, p, s, t;
    char cod[4];
    while(finish != 0){
        scanf("%s", cod);
        if(cod[0] == '*'){
            value += 4;
        }if(cod[1] == '*'){
            value += 2;
        }if(cod[2] == '*'){ 
            value += 1;
        }

        if(cod[0] == 'c'){
            finish--;
            if(finish == 4){
                p = value;
                value = 0;
            }else if(finish == 2){
                s = value;
                value = 0;
            }else if(finish == 0){
                t = value;
                value = 0;
            }
        }
    }
    printf("%d\n%d\n%d\n", p, s, t);
    return 0;
}
