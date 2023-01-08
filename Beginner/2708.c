#include <stdio.h>

int main(){
    int ps = 0, j = 0;
    while(1){
        char s[7];
        int p;
        scanf("%s %d", s, &p);

        if(s[0] == 'A'){
            break;
        }else if(s[0] == 'S'){
            j++;
            ps += p;
        }else{
            j--;
            ps -= p;
        }
    }

    printf("%d\n", ps);
    printf("%d\n", j);
    return 0;
}
