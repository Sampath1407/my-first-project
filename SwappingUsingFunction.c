#include<stdio.h>
int swap(int, int);
int main(){
    int x,y;
    printf("enter 2 num\n");
    scanf("%d%d", &x, &y);
    printf("x and y before swapping %d, %d\n", x,y);
    swap(x,y);
    return 0;
}
int swap(int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("x and y after swapping %d, %d\n", x, y);
}