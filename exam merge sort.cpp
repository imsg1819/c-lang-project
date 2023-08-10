#include <stdio.h>

void swap(int* e, int* f)
{
    int temp = *e;
    *e = *f;
    *f = temp;
}

int partition(int arr[], int lower, int higher)
 {
    int pivot = arr[higher];
    int i = (lower - 1);

    for (int j = lower; j <= higher - 1; j++)
     {
        if (arr[j] < pivot) 
	   {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[higher]);
    return (i + 1);
}




void quickSort(int arr[], int lower, int higher)
 {
    if (lower < higher) 
    {
        int pivot = partition(arr, lower, higher);
        quickSort(arr, lower, pivot - 1);
        quickSort(arr, pivot + 1, higher);
    }
}




int main()
 {
    int arr[] = {14, 7, 5, 12, 2, 11, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("The Sorted array is after using merge sort : \n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


