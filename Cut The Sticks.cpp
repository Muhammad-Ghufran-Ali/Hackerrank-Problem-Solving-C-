#include <bits/stdc++.h>

using namespace std;

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {

    vector <int> cut;
    
    int count = 1;
    int size_arr = arr.size();
    sort(arr.begin(),arr.end());
    cut.push_back(size_arr);
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] != arr[i-1])
        {
            size_arr -= count;
            cut.push_back(size_arr);
            count = 1;
        }
        else
        {
            count++;
        }
    }
    reverse(cut.end(), cut.begin());
    return cut;
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

    vector<int> result = cutTheSticks(arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}

