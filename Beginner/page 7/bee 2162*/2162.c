#include <stdio.h>

int main(){
    int t, nlg = 1, h, lasth, o, lasto = -1;
    scanf("%d", &t);
    
    scanf("%d", &lasth);
    t--;

    while(t--){
        scanf("%d", &h);
        if(h > lasth){
            o = 1;
        }else if(h == lasth){
            nlg = 0;
        }else{
            o = 0;
        }

        if(lasto == o){
            nlg = 0;
        }else{
            lasto = o;
            lasth = h;
        }
    }

    printf("%d\n", nlg);
    return 0;
}
