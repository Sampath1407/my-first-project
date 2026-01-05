#include <stdio.h>

int is_prime(int n){
    if (n <= 1) {
        return 0;
    }
    if (n <= 3) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2){
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1){
        printf("Invalid input\n");
        return 1;
    }
    if (is_prime(n)){
        printf("%d is a prime number\n", n);
    }
    else{
        printf("%d is not a prime number\n", n);
    }
    return 0;
}
