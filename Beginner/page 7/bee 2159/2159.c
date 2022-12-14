#include <stdio.h>
#include <math.h>

int main(){
    int num;
    scanf("%d", &num);

    double op = num/log(num);
    printf("%.1lf %.1lf\n", op, 1.25506 * op);
    return 0;
}
