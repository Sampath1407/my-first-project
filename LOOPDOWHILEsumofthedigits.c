#include <stdio.h>
int main(){
    int a, sum=0, r;
    printf("Enter a number: ");
    scanf("%d", &a);
    do{
        r=a%10;
        sum=sum+r;
        a=a/10;
    }while(a!=0);
    printf("Sum of digits: %d\n", sum);
    return 0;
}