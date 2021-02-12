#include <bits/stdc++.h>

using namespace std;

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    int apple_count = 0, orange_count = 0;
    
    for(int i = 0; i < apples.size(); i++)
    {
        if(a+apples[i] >= s && a+apples[i] <= t) apple_count++;
    }

    for(int i = 0; i < oranges.size(); i++)
    {
        if(b+oranges[i] >= s && b+oranges[i] <= t) orange_count++;
    }
    cout << apple_count << "\n" << orange_count << endl;
}

int main()
{
    int s, t;
    cin >> s >> t;

    int a, b;
    cin >> a >> b;
    
    int m, n;
    cin >> m >> n;

    vector<int> apples(m);

    for (int i = 0; i < m; i++) {
        cin >> apples[i];
    }

    vector<int> oranges(n);

    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}
