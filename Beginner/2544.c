#include <stdio.h>
#include <math.h>

int main(){
    int t;

    while(scanf("%d", &t) != EOF){
        int cont = 0;
        while(t != 1){

            t /= 2;
            cont++;
        }

        printf("%d\n", cont);
    }
    return 0;
}
