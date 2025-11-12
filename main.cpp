#include <iostream>
#define MAX 8
//test

void merge_sort(int arr[MAX], int, int);

int arr[MAX];

int main()
{
    std::cout << "Enter 8 unsorted elements:\n";
    for (int i = 0; i < MAX; i++) {
        std::cin >> arr[i];
    }

    merge_sort(arr, 0, MAX - 1);

    std::cout << "Sorted array:\n";
    for (int i = 0; i < MAX; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}