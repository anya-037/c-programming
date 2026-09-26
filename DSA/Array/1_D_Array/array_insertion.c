
/*
//insertion at last
#include <stdio.h>

void insertElement(int arr[], int n, int cap, int x) {
    if (n == cap){
        return;
    }
    arr[n] = x;
}

int main(){
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int cap = 10;
    int x = 60;
    insertElement(arr, n, cap, x);
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

//insertion at any point
/*
#include <stdio.h>

void insertElement(int arr[], int n, int cap, int x, int pos){
    if (n == cap){
        return;
    }
    for (int i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
}

int main(){
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int cap = 10;
    int x = 60;
    int pos = 2;
    insertElement(arr, n, cap, x, pos);
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

//deletion of array
#include <stdio.h>

void deleteElement(int arr[], int n, int pos){
    for (int i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
}

int main(){

    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;
    deleteElement(arr, n, pos);
    n--;
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}