#include<stdio.h>
#include<math.h>
#define max(a,b) (a > b ? a : b)
int main(){
    printf("%d\n", max(5, 10));
    printf("%.5f %.0f %.0f %.0f", sqrt(99), floor(9.5), ceil(9.5), round(9.5));
    return 0;
}