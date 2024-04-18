
#include <stdio.h>

void swap(int* a, int* b)
 {                                //swap` 函数用于交换两个元素的值，
    int temp = *a;
    *a = *b;
    *b = temp;
 }

int partition(int arr[], int low, int high)
 {              //partition` 函数用于选择一个基准元素并将数组分成两部分，
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) 
	{
        if (arr[j] < pivot) 
		{
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) 
{    //`quickSort` 函数用于递归地对子数组进行排序。
    if (low < high)
	 {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
     }
}

int main() 
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("排序前的数组：\n");
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("排序后的数组：\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//在 `main` 函数中，我们定义了一个数组并调用 `quickSort` 函数对其进行排序。最后，打印排序前和排序后的数组。
