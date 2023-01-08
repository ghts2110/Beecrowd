#include <stdio.h>

int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        int i, j, max = num - 1, min = 0;
        for(i = 0; i != num; i++){
            for(j = 0; j != num; j++){
                if(j == num / 2 && i == num / 2){
                    printf("4");
                }else if(i >= num / 3 && i <= (num - 1) - num/3 && j >= num / 3 && j <= (num - 1) - num/3){
                    printf("1");
                }else if(i == j){
                    printf("2");
                }else if(i == min && j == max){
                    printf("3"); 
                }else{
                    printf("0");
                }
            }printf("\n");
            max--;
            min++;
        }printf("\n");
    }
    return 0;
}
