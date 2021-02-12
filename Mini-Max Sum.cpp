#include <bits/stdc++.h>

using namespace std;

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    
    long sum = 0;
    sort(arr.begin(),arr.end());
    
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];    
    }
    
    cout << sum-arr[arr.size()-1] << " " << sum-arr[0] << endl;
}

int main()
{
    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}

