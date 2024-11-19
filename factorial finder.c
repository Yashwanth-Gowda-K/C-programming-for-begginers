#include <stdio.h>
int main () {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a positive numbers: ");
    scanf("%d", &n);

    if (n<  0){
        printf("It cant be negative numbers...\n");
        return 1;

    }

    for (i=1; i<=n; i++){
        factorial *=1;
    }
    printf("The factorial value of %d is: %llu\n", n , factorial);
    return 0;
}