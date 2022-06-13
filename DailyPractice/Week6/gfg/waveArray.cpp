#include <vector>
void convertToWave(int n, std::vector<int> &arr)
{

    // Your code here
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}