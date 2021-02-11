#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int left = 0, right = 0;
    
    for(int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr[i].size(); j++)
        {
            if(i == j) left += arr[i][j];
            if(i+j == arr.size()-1) right += arr[i][j];
        }
    }
    return abs(left-right);
}

int main()
{
	int n;
	cin >> n;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);


        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int result = diagonalDifference(arr);

    cout << result << "\n";

    return 0;
}
