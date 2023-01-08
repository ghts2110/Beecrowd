#include <stdio.h>

int main(){
    int month, day;
    while(scanf("%d %d", &month, &day) != EOF){
        if(month == 12 && day == 24){
            printf("E vespera de natal!\n");
        }else if(month == 12 && day == 25){
            printf("E natal!\n"); 
        }else if(month == 12 && day > 25){
            printf("Ja passou!\n");
        }else{
            int x;
            if(month == 1){
                x = 360 - day;
            }else if(month == 2){
                x = 329 - day;
            }else if(month == 3){
                x = 300 - day;
            }else if(month == 4){
                x = 269 - day;
            }else if(month == 5){
                x = 239 - day;
            }else if(month == 6){
                x = 208 - day;
            }else if(month == 7){
                x = 178 - day;
            }else if(month == 8){
                x = 147 - day;
            }else if(month == 9){
                x = 116 - day;
            }else if(month == 10){
                x = 86 - day;
            }else if(month == 11){
                x = 55 - day;
            }else if(month == 12){
                x = 25 - day;
            }

            printf("Faltam %d dias para o natal!\n", x);
        }
    }
    return 0;
}
