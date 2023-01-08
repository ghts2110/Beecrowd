#include <stdio.h>

int main(){
    int m, n;
    while(scanf("%d %d", &m, &n)){
        if(m == 0 && n == 0){
            break;
        }
        int troco = n - m;
        if(troco == 4 ||troco == 7 ||troco == 12 ||troco == 22 ||troco == 52 ||troco == 102){
            printf("possible\n"); 
        }else if(troco == 10 ||troco == 15 ||troco == 25 ||troco == 55 ||troco == 105){
            printf("possible\n");
        }else if(troco == 20 ||troco == 30 ||troco == 60 ||troco == 110){
            printf("possible\n");
        }else if(troco == 40 ||troco == 70 ||troco == 120){
            printf("possible\n");
        }else if(troco == 100 ||troco == 150){
            printf("possible\n");
        }else if(troco == 200){
            printf("possible\n");
        }else{
            printf("impossible\n");
        }

    }
    return 0;
}
