#include<stdio.h>
int main(){
    int a[5]={10,20,30,40,50}, i;
    int s;
    printf("Enter the search element: ");
    scanf("%d", &s);
    for(i=0 ; i<=4; i++){
        printf("%d ", a[i]);
    }
    for(i=0; i<=4; i++){
        if (a[i]==s){
            printf("\n Element found at index %d\n", i);
            break;
        }
    }
    if(i==5){
        printf("\n Element not found\n");
    }
    return 0;
}