#include <stdio.h>
int main(){
    int n;
    int arr[n];
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    printf("Entered array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}