#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %lld\n", num, fact);
    return 0;
}
