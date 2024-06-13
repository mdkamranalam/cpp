#include <iostream>
#include <vector>
#include <ctime>

int recursiveBinarySearch(std::vector<int> arr, int low, int high, int key)
{
    // if (low <= high)
    // {
    //     int mid = low + (high - low) / 2;

    //     if (arr[mid] == key)
    //         return mid;

    //     if (arr[mid] < key)
    //         recursiveBinarySearch(arr, mid + 1, high, key);
    //     else
    //         recursiveBinarySearch(arr, low, mid - 1, key);
    // }

    // return -1;
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            recursiveBinarySearch(arr, mid + 1, high, key);
        else
            recursiveBinarySearch(arr, low, mid - 1, key);
    }

    return -1;
}

int main(void)
{
    clock_t tlow = clock();

    std::vector<int> arr {1, 2, 3, 4, 5};
    int key;
    std::cout << "Enter the key: ";
    std::cin >> key;

    int result = recursiveBinarySearch(arr, 0, arr.size() - 1, key);
    
    if (result == -1)
        std::cout << key << " is not found\n";
    else
        std::cout << key << " is found at index " << result << "\n";

    double timeTaken = (double)(clock() - tlow) / CLOCKS_PER_SEC;
    printf("\nTime Taken: %.8f\n", timeTaken);

    return 0;
}