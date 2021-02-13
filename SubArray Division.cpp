#include <bits/stdc++.h>

using namespace std;

// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {

    int sum;
    int count = 0;
    
    for(int i = 0; i < s.size(); i++)
    {
        sum = 0;
        for(int j = i; j < i+m; j++)
        {
            sum += s[j];
        }
        if(sum == d) count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> s(n);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int d, m;
    cin >> d >> m;

    int result = birthday(s, d, m);

    cout << result << "\n";

    return 0;
}
