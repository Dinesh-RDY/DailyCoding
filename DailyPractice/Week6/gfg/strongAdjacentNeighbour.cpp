#include <iostream>
#include <algorithm>
using namespace std;

void maximumAdjacent(int sizeOfArray, int arr[])
{

    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
    for (int i = 0; i < sizeOfArray - 1; i++)
    {
        int x = max(arr[i], arr[i + 1]);
        cout << x << " ";
    }
}
