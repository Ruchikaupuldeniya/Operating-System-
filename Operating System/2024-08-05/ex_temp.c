#include <stdio.h>

int main() {
    int temp;
    printf("Please enter the Temperature: ");
    scanf("%d", &temp);

    if (temp >= 40) {
        printf("It's very hot");
    }else if (30 < temp < 40) {
        printf("It's hot");
    }else if (20 < temp < 30) {
        printf("Normal temperature");
    }else if (10 < temp < 20) {
        printf("Cold weather");
    }else if (0 < temp < 10) {
        printf("Very cold weather");
    } else if (temp < 0) {
        printf("Freezing weather");
    } else {
        printf("");
    }
    return 0;
}