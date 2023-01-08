#include <stdio.h>

int main(){
    int n, q;

    while(scanf("%d %d", &n, &q) != EOF){
        int note[n], i, j;
        for(i = 0; i != n; i++){
            scanf("%d", &note[i]);
        }

        for(i = 0; i != n - 1; i++){
            for(j = i + 1; j != n; j++){
                if(note[i] < note[j]){ 
                    int v = note[i];
                    note[i] = note[j];
                    note[j] = v;
                }
            }
        }
        
        while(q--){
            int index;
            scanf("%d", &index);
            printf("%d\n", note[index - 1]);
        }
    }
    return 0;
}
