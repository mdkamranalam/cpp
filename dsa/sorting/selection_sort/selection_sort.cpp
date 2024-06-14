#include <iostream>
#include <vector>
#include <ctime>

void printArray(std::vector<int> arr, int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << arr[i] << " ";
    }
    printf("\n");
}

void swapping(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(std::vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swapping(arr[minIndex], arr[i]);
    }
}

int main(void)
{
    clock_t tStart = clock();

    std::vector<int> arr{64, 25, 12, 22, 11};
    std::cout << "Before selection sort:\n";
    printArray(arr, arr.size());

    selectionSort(arr, arr.size());

    std::cout << "\nAfter selection sort:\n";
    printArray(arr, arr.size());

    double timeTaken = (double)(clock() - tStart) / CLOCKS_PER_SEC;
    printf("\nTime Taken: %.8f\n", timeTaken);

    return 0;
}