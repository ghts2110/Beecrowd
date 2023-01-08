#include <stdio.h>

int main(){
    char array[34] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int t, i;
    scanf("%d", &t);
    for(i = 0; i != t; i++){
        printf("%c", array[i]);
    }printf("\n");
    return 0; 
}
