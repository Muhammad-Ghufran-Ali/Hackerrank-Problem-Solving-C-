#include <bits/stdc++.h>

using namespace std;

// Complete the runningTime function below.
int runningTime(vector<int> arr) {

    int shifts = 0;
    int i,j;
    int value;
    for(i=1;i<arr.size();i++)
    {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j])
        {
            shifts++;
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }

    return shifts;
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

    int result = runningTime(arr);

    cout << result << "\n";

    return 0;
}

