#include <stdio.h>

int main(){
    int num, value = 0, t = 4;
    while(t--){
        scanf("%d", &num);
        value+=num;
    }
    printf("%d\n", value - 3);
    return 0;
}
