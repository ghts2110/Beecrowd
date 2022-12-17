#include <stdio.h>
#include <stdlib.h>

int main(){
    int t = 0 , value = 0, v;
    char name[20];

    while(1){
        value = 0;
        scanf("%d", &t);
        
        if(t == 0){
            break;
        }

        while(t--){  
            scanf("%d", &v);
            scanf("%[^\n\r]", name);
           
            if(name[1] == 's'){
                value += v * 120;
            }else if(name[6] == 'g'){
                value += v * 85;
            }else if(name[3] == 'm'){
                value += v * 85;
            }else if(name[1] == 'g'){
                value += v * 70;
            }else if(name[3] == 'n'){
                value += v * 56;
            }else if(name[1] == 'l'){
                value += v * 50;

            }else{
                value += v * 34;
            }
        }
        
        if(value > 130){
            printf("Menos %d mg\n", value - 130);
        }else if(value < 110){
            printf("Mais %d mg\n", 110 - value);
        }else{
            printf("%d mg\n", value);
        }
    }
    return 0;
}
