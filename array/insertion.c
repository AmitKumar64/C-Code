#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int size, int element, int index)
{
    for (int i = size; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}

int main()
{
    int arr[10] = {2, 4, 5, 9, 12, 34, 56};
    int size = 7, element = 23, index = 5;
    display(arr, size);
    insert(arr, size, element, index);
    size += 1;
    display(arr, size);
}