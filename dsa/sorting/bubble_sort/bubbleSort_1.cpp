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

void swapping(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(std::vector<int> &arr, int n)
{
    for (int i = 0; i < (n - 1); ++i)
    {
        for (int j = 0; j < n - i; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swapping(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(void)
{
    clock_t tStart = clock();

    std::vector<int> arr{10, 1, 7, 6, 14, 9};

    printf("Before Bubble Sort: \n");
    printArray(arr, arr.size());

    bubbleSort(arr, arr.size());

    printf("\nAfter Bubble Sort: \n");
    printArray(arr, arr.size());

    printf("\nTime Taken: %.8f\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

    return 0;
}

/*
COMPLEXITY:-
Time Complexity - O(n^2)
    Best Case - already sorted - O(n)
    Worst Case - reverse sorted - O(n^2)
Space Complexity - O(1)
*/