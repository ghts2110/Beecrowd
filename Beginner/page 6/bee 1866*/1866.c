#include <stdio.h>

int main(){
    int t, num; 
    scanf("%d", &t);
    while(t--){
        scanf("%d", &num);
        printf("%d\n", num % 2);
    }
    return 0;
}
