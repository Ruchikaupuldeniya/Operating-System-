#include<stdio.h>


void DisplayMenu(){
    printf("1. Summation");
    printf("2. Subtraction");
    printf("3. Devition");
    printf("4. Modvalue");
    printf("Enter choise");
}

void Summation(float num1, float num2){
    float equal;

    equal = num1+num2;

    printf("value is %f" , equal);
}
void Subtraction(float num1, float num2){
    float equal;

    equal = num1-num2;

    printf("value is %f" , equal);
}
void Divide(float num1, float num2){
    float equal;

    equal = num1/num2;

    printf("value is %f" , equal);
}
void Mod(float num1, float num2){
    float equal;

    equal = (int)num1%(int)num2;

    printf("value is %f" , equal);
}

int main(){
    float num1;
    float num2;
    DisplayMenu();

    printf("Enter the first value :");
    scanf("%f", &num1);

    printf("Enter the secound value : ");
    scanf("%f", &num2);

    Summation(num1,num2);
    Subtraction(num1,num2);
    Divide(num1,num2);
    mod(num1,num2);

    return 0;
}