#include <stdio.h>

int main(){
    int t;

    while(scanf("%d", &t) != EOF){
        long long mat[t], i, m = 0, v1 = 0, v2 = 0;
        for(i = 0; i != t; i++){
            scanf("%lld", &mat[i]);
            m += mat[i];
        }  

        for(i = 0; i != t; i++){
            v1 += mat[i];
            if(v1 >= m/2){
                v2 = v1 - mat[i];
                break;
            }
        }

        v1 -= m - v1;
        v2 -= m - v2;

        if(v1 < 0){
            v1 *= -1;
        }
        if(v2 < 0){
            v2 *= -1;
        }

        if(v1 > v2){
            v1 = v2;
        }

        printf("%lld\n", v1);
    }

    return 0;
}
