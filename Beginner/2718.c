#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        long long n;
        int cont = 0, max = 0;
        scanf("%lld", &n);
        
        while(n != 0){
            if(n % 2 == 1){
                cont++;
            }else{
                cont = 0;
            }
            n /= 2;

            if(cont > max){
                max = cont;
            }
        }

        printf("%d\n", max);
    }
    return 0;
}
