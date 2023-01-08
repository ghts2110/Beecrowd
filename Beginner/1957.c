#include <stdio.h>

int main(){
    long num;
    int index = 7, array[8] = {-1, -1, -1, -1, -1, -1, -1, -1};
    scanf("%ld", &num); 

    while(num >= 16){
        array[index] = num % 16;
        index--;
        num /= 16;
    }
    array[index] = num;

    int i;
    for(i = 0; i != 8; i++){
        if(array[i] != -1){
            if(array[i] == 15){
                printf("F");
            }else if(array[i] == 14){
                printf("E");
            }else if(array[i] == 13){
                printf("D");
            }else if(array[i] == 12){
                printf("C");
            }else if(array[i] == 11){
                printf("B");
            }else if(array[i] == 10){
                printf("A");
            }else{
                printf("%d", array[i]);
            }
        }
    }printf("\n");
    return 0;
}
