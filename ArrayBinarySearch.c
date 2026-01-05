#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n], low=0, high=n, mid;
    int s;
    int i,j,temp;
    printf("Enter elements:\n");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Array before sorting:\n");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    // Bubble Sort

    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                // Swap a[j] and a[j+1]
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nArray after sorting:\n");
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\nEnter the search element: ");
    scanf("%d", &s);
    
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==s){
            printf("\n Element found at index %d", mid);
            break;
        }else if( a[mid]>s ){
            high=mid-1;
        }else{
            low=mid+1;
        }

    }
    if(low>high){
        printf("\n Element not found\n");
    }
    return 0;
}