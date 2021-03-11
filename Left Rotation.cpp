#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */

vector<int> rotateLeft(int d, vector<int> arr) {
    
    vector<int> rotate;
    
    for(int i = 0; i < arr.size(); i++)
    {
        rotate.push_back(arr[(i+d) % arr.size()]);
    }
    
    return rotate;
}

int main()
{
    int n, d;
    cin >> n >> d;
    
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = rotateLeft(d, arr);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}

