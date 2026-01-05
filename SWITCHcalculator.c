#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    switch(op){
        case '+':
            printf("%d + %d = %d\n", a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d\n", a,b,a/b);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    return 0;
}

