#include <stdio.h>

void cube(int *arr, int n) 
{
    for (int i=0; i<n; i++) 
	{
        *arr = (*arr) * (*arr) * (*arr);
        arr++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i=0;i<n;i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

    cube(arr, n);

    printf("Cube of elements: ");
    for (int i=0;i<n;i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");

}