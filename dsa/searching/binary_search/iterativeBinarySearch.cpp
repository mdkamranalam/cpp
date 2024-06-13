#include <iostream>
#include <vector>
#include <ctime>

int iterativeBinarySearch(std::vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return ans;
}

int main(void)
{
    clock_t tStart = clock();

    std::vector<int> arr {1, 2, 3, 4, 5};
    int key;
    std::cout << "Enter the key: ";
    std::cin >> key;

    int result = iterativeBinarySearch(arr, key);
    
    if (result == -1)
        std::cout << key << " is not found\n";
    else
        std::cout << key << " is found at index " << result << "\n";

    double timeTaken = (double)(clock() - tStart) / CLOCKS_PER_SEC;
    printf("\nTime Taken: %.8f\n", timeTaken);

    return 0;
}