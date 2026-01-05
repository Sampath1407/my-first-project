#include<stdio.h>
int main(){
    int r,i,j;
    printf("Enter number of rows:");
    scanf("%d", &r);
    int a[r][r];
    for(i=0; i<r; i++){
        for(j=0; j<r; j++){
            if(i==j){
                a[i][j]=1;
            }else{
                a[i][j]=0;
            }
        }
    }
    printf("Identity Matrix:\n");

    for(i=0; i<r; i++){
        for(j=0; j<r; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

