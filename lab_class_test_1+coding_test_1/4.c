#include <stdio.h>
void PrintArray(int arr[], int size);
int main()
{
    int i;
    int size = 5;
    int arr_1[100] = {10, 20, 30, 40, 50};
    int arr_2[100];
    int *main_arr = arr_1;
    int *copy_arr   = arr_2;
    int *last;
    last = &arr_1[size - 1];
    while(main_arr <= last)
    {
        *copy_arr = *main_arr;
        main_arr++;
        copy_arr++;
    }
    printf("First Array:\n");
    PrintArray(arr_1, size);
    printf("\n\nCopying to Second Array:\n");
    PrintArray(arr_2, size);
    return 0;
}
void PrintArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", *(arr + i));
}
