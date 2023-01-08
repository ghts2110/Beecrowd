#include <stdio.h>

int main(){
    int hora, minuto;
    char array[5] = "";
    while(scanf("%s", array) != EOF){
        if(array[0] == '5'){
            hora = 5;
        }else if(array[0] == '6'){
            hora = 6;
        }else if(array[0] == '7'){
            hora = 7; 
        }else if(array[0] == '8'){
            hora = 8;
        }else if(array[0] == '9'){
            hora = 9;
        }

        if(array[2] == '1'){
            minuto = 10;
        }else if(array[2] == '2'){
            minuto = 20;
        }else if(array[2] == '3'){
            minuto = 30;
        }else if(array[2] == '4'){
            minuto = 40;
        }else if(array[2] == '5'){
            minuto = 50;
        }else if(array[2] == '6'){
            minuto = 60;
        }else if(array[2] == '7'){
            minuto = 70;
        }else if(array[2] == '8'){
            minuto = 80;
        }else if(array[2] == '9'){
            minuto = 90;
        }else{
            minuto = 0;
        }


        if(array[3] == '1'){
            minuto += 1;
        }else if(array[3] == '2'){
            minuto += 2;
        }else if(array[3] == '3'){
            minuto += 3;
        }else if(array[3] == '4'){
            minuto += 4;
        }else if(array[3] == '5'){
            minuto += 5;
        }else if(array[3] == '6'){
            minuto += 6;
        }else if(array[3] == '7'){
            minuto += 7;
        }else if(array[3] == '8'){
            minuto += 8;
        }else if(array[3] == '9'){
            minuto += 9;
        }else{
            minuto += 0;
        }

        if(hora < 7){
            printf("Atraso maximo: 0\n");
        }else{
            if(hora == 7){
                printf("Atraso maximo: %d\n", minuto);
            }else if(hora == 8){
                printf("Atraso maximo: %d\n", minuto + 60);
            }else{
                printf("Atraso maximo: %d\n", minuto + 120);
            }
        }
    }
    return 0;
}
