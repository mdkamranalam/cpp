#include <iostream>
#include <vector>
#include <ctime>

void printArray(std::vector<int> arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(std::vector<int> &arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int temp = arr[i];
        int j = i - 1;

        while (temp < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }
}

int main(void)
{
    clock_t tStart = clock();

    std::vector<int> arr {55, 3, 21, 16, 7, 8, 90, 11, 74, 6};

    std::cout << "Before Insertion Sort:\n";
    printArray(arr, arr.size());

    insertionSort(arr, arr.size());

    std::cout << "\nAfter Insertion Sort:\n";
    printArray(arr, arr.size());


    printf("\nTime Taken: %.8f\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

    return 0;
}