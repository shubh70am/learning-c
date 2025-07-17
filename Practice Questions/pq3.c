#include<stdio.h>

int main(){
    int n;
    printf("entre the name of variable:\n");
    scanf("%d", &n);
    int cube = n * n * n;
    printf("the cube of the n is: %d\n", cube);
    return 0;
}