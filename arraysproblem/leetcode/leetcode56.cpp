#include <iostream>
#include <algorithm>
using namespace std;

void mergeIntervals(int arr[][2], int n)
{
    // Sort intervals according to starting value
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i][0] > arr[j][0])
            {
                swap(arr[i][0], arr[j][0]);
                swap(arr[i][1], arr[j][1]);
            }
        }
    }

    int start = arr[0][0];
    int end = arr[0][1];

    for(int i = 1; i < n; i++)
    {
        // If intervals overlap
        if(arr[i][0] <= end)
        {
            if(arr[i][1] > end)
                end = arr[i][1];
        }
        else
        {
            // Print previous interval
            cout << "[" << start << "," << end << "] ";

            // Start new interval
            start = arr[i][0];
            end = arr[i][1];
        }
    }

    // Print last interval
    cout << "[" << start << "," << end << "] ";
}

int main()
{
    int arr[][2] = {
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };

    int n = 4;

    mergeIntervals(arr, n);

    return 0;
}