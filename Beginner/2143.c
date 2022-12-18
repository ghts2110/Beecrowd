#include <stdio.h>

int main(){
    int t;
    while(scanf("%d", &t)){
        if(t == 0){
            break;
        }

        while(t--){
            int n, value;
            scanf("%d", &n);
            if(n % 2 == 1){
                value = (n - 1) * 2 + 1;
            }else{
                value = (n - 2) * 2 + 2;
            }

            printf("%d\n", value);
        }
    }
    return 0;
}
