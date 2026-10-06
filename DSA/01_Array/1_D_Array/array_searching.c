/*

//Linear Search

// Time Complexity
// Best Case  ==> O(1)
// Average Case ==> O(n)
// Worst Case ==> O(n)

#include <stdio.h>

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 56, 23, 78, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 34;
    printf("The index of element is: %d", linearSearch(arr, n, key));
    return 0;
}
*/

/*
//Binary Search

//Time Complexity
//Best Case ==> O(1)
//Average Case ==> O(log n)
//Worst Case ==> O(log n)

#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 23, 56, 78, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 78;
    int result = binarySearch(arr, n, key);
    printf("Element found at index: %d", result);
    return 0;
}
*/