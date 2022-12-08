#include <stdio.h>

int main(){
    int t, r1, r2;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d %d", &r1, &r2);
        int r3 = r1 + r2;
        printf("%d\n", r3);
    }
    return 0;
}
