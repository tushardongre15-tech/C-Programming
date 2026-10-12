#include <stdio.h>

int main() {
    int num = -5;

    if (num > 0) {
        printf("%d is positive\n", num);
    } else if (num < 0) {
        printf("%d is negative\n", num);
    } else {
        printf("The number is zero\n", num);
    }

    return 0;
}