#include <stdio.h>

int main(){
    int num, i, j;
    while(scanf("%d", &num) !=EOF){
        int max = num - 1, min = 0, mid = -1;
        if(num % 2 == 1){
            mid = num / 2;
        }
        for(i = 0; i != num; i++){
            for(j = 0; j != num; j++){
                if(i == j && i != mid){
                    printf("1");
                }else if(i == min && j == max){
                    min++;
                    max--;
                    printf("2");
                }else{
                    printf("3");
                }
            }printf("\n");
        }
    }
    return 0;
}
