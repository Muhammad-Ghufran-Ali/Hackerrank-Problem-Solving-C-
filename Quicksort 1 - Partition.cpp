#include <bits/stdc++.h>

using namespace std;

// Complete the quickSort function below.
vector<int> quickSort(vector<int> arr) {

    vector<int> left;
    vector<int> equal;
    vector<int> right;
    equal.push_back(arr[0]);
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] > arr[0])
        {
            right.push_back(arr[i]);
        }
        else if(arr[i] < arr[0])
        {
            left.push_back(arr[i]);
        }
        else
        {
            equal.push_back(arr[i]);
        }
    }
    vector<int> quicksort;
    for(int i = 0; i < left.size(); i++)
    {
        quicksort.push_back(left[i]);
    }
    for(int i = 0; i < equal.size(); i++)
    {
        quicksort.push_back(equal[i]);
    }
    for(int i = 0; i < right.size(); i++)
    {
        quicksort.push_back(right[i]);
    }
    return quicksort;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = quickSort(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
