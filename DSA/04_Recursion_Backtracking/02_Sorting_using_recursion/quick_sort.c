
#include <stdio.h>

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int i = low, j = high;
        int temp;

        while (i < j)
        {
            while (i < j && arr[i] <= arr[j])
                j--;

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }

            while (i < j && arr[i] <= arr[j])
                i++;

            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j--;
            }
        }
        quicksort(arr, low, i - 1);
        quicksort(arr, i + 1, high);
    }
}
int main()
{
    int arr[] = {5, 3, 8, 2, 7};
    int n = 5;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}