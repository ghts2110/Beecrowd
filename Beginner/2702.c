#include <stdio.h>

int main(){
    int c, b, p, pc, pb, pp;

    while(scanf("%d %d %d", &c, &b, &p) != EOF){
        scanf("%d %d %d", &pc, &pb, &pp);
        int people = 0;

        if(pc > c){
            people += pc - c;
        }

        if(pb > b){
            people += pb - b;
        }

        if(pp > p){
            people += pp - p;        
        }

        printf("%d\n", people);
    }
    return 0;
}
