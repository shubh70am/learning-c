#include<stdio.h>
int main(){
    int age ;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age < 18 && age >= 0){
        printf("You are a minor.\n");
    } else if(age >= 18 && age < 60){
        printf("You are an adult.\n");
    } else if(age >= 60){
        printf("You are a senior citizen.\n");

    }
    else{
        printf("Invalid age entered.\n");
    }
}

// (this bracket is used to add conditions)
// { this bracket defines the block of the function}