/*
#include <stdio.h>

void merge(int a[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    int temp[100];

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= high)
        temp[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        a[i] = temp[k];
}

void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}

int main()
{
    int a[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    mergeSort(a, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

*/


#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int start, int mid, int end)
{
    int *temp = (int *)malloc((end - start + 1) * sizeof(int));

    int leftside = start;
    int rightside = mid + 1;
    int index = 0;

    while (leftside <= mid && rightside <= end)
    {
        if (arr[leftside] <= arr[rightside])
        {
            temp[index] = arr[leftside];
            index++;
            leftside++;
        }
        else
        {
            temp[index] = arr[rightside];
            index++;
            rightside++;
        }
    }
    // Remaining elements from the left side
    while (leftside <= mid)
    {
        temp[index] = arr[leftside];
        index++;
        leftside++;
    }
    // Remaining elements from the right side
    while (rightside <= end)
    {
        temp[index] = arr[rightside];
        index++;
        rightside++;
    }
    for (int i = 0; i < index; i++)
    {
        arr[start + i] = temp[i];
    }
    free(temp);
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {6, 3, 8, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
