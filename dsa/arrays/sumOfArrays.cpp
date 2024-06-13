#include <iostream>
#include <vector>
#include <ctime>

int sumOfArrays(std::vector<int> arr)
{
    int sum = 0;

    for (int i = 0; i < arr.size(); ++i)
    {
        sum += arr[i];
    }

    return sum;
}

int main(void)
{
    clock_t tStart = clock();

    std::vector<int> arr {1, 2, 3, 4, 5};
    int result = sumOfArrays(arr);

    std::cout << "Sum of arrays: " << result << "\n";

    double timeTaken = (double)(clock() - tStart) / CLOCKS_PER_SEC;
    printf("\nTime Taken: %.8f\n", timeTaken);

    return 0;
}