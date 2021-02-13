#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;
    bool flag = true;
    
    for(int i = 1; i <= 100; i++)
    {
        flag = true;
        for(int j = 0; j < a.size(); j++)
        {
            if(i % a[j] != 0)
            {
                flag = false;
                break;
            }
        }
        for(int k = 0;k < b.size(); k++)
        {
            if(b[k] % i != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag) count++;
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> brr(m);

    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }

    int total = getTotalX(arr, brr);

    cout << total << "\n";

    return 0;
}
