#include <stdio.h>

int main(){
    float new, old, value;
    scanf("%f %f", &new, &old);
    value = (old - new)/new;
    printf("%.2f", value * 100);
    char c = '%';
    printf("%c\n", c);
    return 0;
} 
