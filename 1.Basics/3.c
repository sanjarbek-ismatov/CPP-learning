#include<stdio.h>
int main(){
    char name[20];
    scanf("%[^\n]s", name);
    printf("%s\n", name);
    return 0;
}