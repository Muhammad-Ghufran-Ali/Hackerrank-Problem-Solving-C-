#include <bits/stdc++.h>

using namespace std;

// Complete the equalizeArray function below.
int equalizeArray(vector<int> arr) {

    int common = 0 , temp =1;
    
    sort(arr.begin(),arr.end());
    
    for(int i = 0; i < arr.size()-1; i++)
    {
        if(arr[i] == arr[i+1]) temp++;
        else                    temp = 1;
        
        if(temp > common) common = temp;
    }
    
    return arr.size()-common;
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

    int result = equalizeArray(arr);

    cout << result << "\n";

    return 0;
}

