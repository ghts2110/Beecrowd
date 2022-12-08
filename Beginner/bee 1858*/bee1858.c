#include <stdio.h>

int main(){
    int t, bestIndex, index = 1, min = 21, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(n < min){
            bestIndex = index;
            min = n;
        }
        index++;
    }
    printf("%d\n", bestIndex);
    return 0;
}
