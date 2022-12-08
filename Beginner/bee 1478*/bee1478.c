#include <stdio.h>

int main(){
    int i, j, num, cond, value;;
    while(1){
        scanf("%d", &num);
        if(num == 0){
            break;
        }
        for(i = 0; i != num; i++){
            cond = 0;
            value = i + 1;
            for(j = 0; j != num; j++){
                if(value == 1){
                    cond = 1;
                }
                if(j == 0){
                    if(cond == 0){
                        printf("%3d", value);
                        value--;
                    }else{
                        printf("%3d", value);
                        value++;
                    }
                }else{
                    if(cond == 0){
                        printf("%4d", value);
                        value--;
                    }else{
                        printf("%4d", value);
                        value++;
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

