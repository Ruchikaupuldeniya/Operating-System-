#include<stdio.h>
int main(){
    float num,num1;
    float sum, sub, div, mod;
    printf("Enter 1st number : ");
    scanf("%f", &num);

    printf("Enter 2nd number : ");
    scanf("%f", &num1);

    sum = num + num1;
    sub = num - num1;
    div = num / num1;
    mod = (int)num % (int)num1;

    printf("\nSummation value is : %f",sum);
    printf("\nSubtraction value is : %f",sub);
    printf("\nDivision value is : %f",div);
    printf("\nModule value is : %f",mod);



    return 0;
}