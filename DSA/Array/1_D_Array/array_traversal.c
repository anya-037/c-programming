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
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    printf("Sum:%d",sum);
    return 0;
}