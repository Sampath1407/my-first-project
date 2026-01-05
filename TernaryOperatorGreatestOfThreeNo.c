#include <stdio.h>
int main(){
    int a=5,b=6,c=10;
    int res= (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("%d", res);
    return 0;
}