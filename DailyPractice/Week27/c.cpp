
#include <bits/stdc++.h>
using namespace std;

vector<int> collectPoint(int x, int y)
{
    vector<int> temp;
    temp.push_back(x);
    temp.push_back(y);
    return temp;
}

int calculateDistance(int x1, int y1, int x2, int y2)
{
    if (x1 == x2 || y1 == y2)
    {
        return (int)sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    int xDistance = (int)abs(y2 - y1);
    int yDistance = (int)abs(x2 - x1);
    return xDistance + yDistance;
}

int CharlietheDog(string strArr[], int size)
{
    vector<vector<int>> result;

    int totalDistance = 0;

    int currentX;
    int currentY;

    int dogX;
    int dogY;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < strArr[row].length(); col++)
        {
            if (strArr[row][col] == 'H')
            {
                currentX = row;
                currentY = col;
            }
            else if (strArr[row][col] == 'C')
            {
                dogX = row;
                dogY = col;
            }
            else if (strArr[row][col] == 'F')
            {
                result.push_back(collectPoint(row, col));
            }
        }
    }

    while (result.size() > 0)
    {
        int lowest = INT_MAX;
        int lowestIndex;
        int lowestX;
        int lowestY;

        for (int x = 0; x < result.size(); x++)
        {
            int getDistance = calculateDistance(currentX, currentY, result[x][0], result[x][1]);

            if (getDistance < lowest)
            {
                lowest = getDistance;
                lowestIndex = x;
                lowestX = result[x][0];
                lowestY = result[x][1];
            }
            else if (getDistance == lowest && calculateDistance(dogX, dogY, lowestX, lowestY) < calculateDistance(dogX, dogY, result[x][0], result[x][1]))
            {
                lowest = getDistance;
                lowestIndex = x;
                lowestX = result[x][0];
                lowestY = result[x][1];
            }
        }

        totalDistance += lowest;

        currentX = lowestX;
        currentY = lowestY;
        result.erase(result.begin() + lowestIndex);
    }

    totalDistance += calculateDistance(currentX, currentY, dogX, dogY);

    return totalDistance;
}

