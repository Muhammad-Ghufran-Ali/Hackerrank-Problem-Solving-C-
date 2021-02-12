#include <bits/stdc++.h>

using namespace std;

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    
    float positive = 0, negative = 0, zero = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0) positive++;
        else if(arr[i] < 0) negative++;
        else zero++;
    }
    cout << setprecision(6) << positive/arr.size() << endl;
    cout << setprecision(6) << negative/arr.size() << endl;
    cout << setprecision(6) << zero/arr.size() << endl;
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

    plusMinus(arr);

    return 0;
}
