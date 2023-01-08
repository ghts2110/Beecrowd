#include <stdio.h>

int main(){
    int a, b, q, r = -1;
    scanf("%d %d", &a, &b);
    q = a / b;
    while(r < 0){
        r = a - (b*q);
        if(r < 0 && a < 0 && b > 0){
            q--;
        }else if(r < 0 && a < 0 && b < 0){
            q++;
        } 
    }
    printf("%d %d\n", q, r);
    return 0;
}
