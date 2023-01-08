#include <stdio.h>

int main(){
    long long int t, i, planet = 0;
    scanf("%lld", &t);
    long long int array[t];
    for(i = 0; i != t; i++){
        scanf("%lld", &array[i]);
    }
    
    long long int index = 0;
    while(index != -1 && index != t){
        if(array[index] % 2 == 0){
            if(array[index] != 0){
                array[index]--; 
            }
            index--;
        }else{
            array[index]--;
            index++;
        }

        if(index > planet){
            planet++;
        }
    }
    if(index == -1){
        planet++;
    }

    long long int cont = 0;
    for(i = 0; i != t; i++){
        cont += array[i];
    }
    printf("%lld %lld\n",planet, cont);
    return 0;
}
