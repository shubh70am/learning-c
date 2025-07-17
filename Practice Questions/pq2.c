#include<stdio.h>

int main(){
    int length,width;
    printf("entre the length and width of rectangle:");
    scanf("%d %d", &length, &width);
    int perimetre = 2 * (length + width);
    printf("the perimetre of the rectangle is: %d\n", perimetre);
        return 0;
}