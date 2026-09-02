#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr)
{
    int n = arr.size();

    // Sort intervals
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++)
    {
        int start = arr[i][0];
        int end = arr[i][1];

        // Skip if already covered
        if(!ans.empty() && end <= ans.back()[1])
        {
            continue;
        }

        // Check following intervals
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j][0] <= end)
            {
                end = max(end, arr[j][1]);
            }
            else
            {
                break;
            }
        }

        ans.push_back({start, end});
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    vector<vector<int>> result = mergeOverlappingIntervals(arr);

    // Print result
    for(int i = 0; i < result.size(); i++)
    {
        cout << "[" << result[i][0] << "," << result[i][1] << "] ";
    }

    return 0;
}