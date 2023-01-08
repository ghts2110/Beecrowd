#include <stdio.h>

int main(){
    int a1, a2, a3, m1, m2, m3, min;

    while(scanf("%d %d %d", &a1, &a2, &a3) != EOF){
        m1 = (a2 * 2) + (a3 * 4);
        m2 = (a1 * 2) + (a3 * 2);
        m3 = (a1 * 4) + (a2 * 2);

        if(m1 < m2){
            min = m1;
        }else{ 
            min = m2;
        }

        if(min > m3){
            min = m3;
        }

        printf("%d\n", min);
    }
    return 0;
}
