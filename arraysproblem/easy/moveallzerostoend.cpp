#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,0,2,0,3,5,0,0,9};
    int n = 9;

    int temp[9];
    int j = 0;

    // Store non-zero elements first
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    // Store zeros at the end
    while(j < n)
    {
        temp[j] = 0;
        j++;
    }

    // Print result
    for(int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}