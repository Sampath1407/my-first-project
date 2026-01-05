#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], transposed[c][r];
    printf("Enter elements of the matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // Transpose
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            transposed[j][i] = a[i][j];
        }
    }
    printf("Transposed matrix:\n");
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    return 0;
}
