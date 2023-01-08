#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if(num < 1){
        printf("E\n");
    }else if(num < 36){
        printf("D\n");
    }else if(num < 61){
        printf("C\n");
    }else if(num < 86){
        printf("B\n");
    }else{
        printf("A\n");
    }
    return 0; 
}
