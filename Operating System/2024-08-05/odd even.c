#include<stdio.h>
int main(){

    int num1;
    int answer;

    printf("Enter the first value :");
    scanf("%d", &num1);

    answer = num1 % 2;

    if(answer == 0){
        printf("it is a Even Number.");
    }else if(answer == 1){
        printf("it is a Odd Number.");
    }else{
        printf("Thank you");
    }
    return 0;
}