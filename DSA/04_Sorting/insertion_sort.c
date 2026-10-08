
//Without function
#include <stdio.h>

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>0;j--){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={3,7,1,9,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

//

#include <stdio.h>

int main()
{
    int a[100], n, key, j;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}