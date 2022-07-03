int majorityElement(int arr[], int size)
{

    // your code here
    int majority = arr[0];
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == majority)
        {
            count++;
        }
        else
        {
            count--;
            if (count == 0)
            {
                majority = arr[i];
                count = 1;
            }
        }
    }
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == majority)
            count++;
    }
    if (count < size / 2 + 1)
        return -1;
    return majority;
}