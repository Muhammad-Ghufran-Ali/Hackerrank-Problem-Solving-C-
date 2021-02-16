#include <bits/stdc++.h>

using namespace std;

// Complete the hurdleRace function below.
int hurdleRace(int k, vector<int> height) {

    int maxhurdle = *max_element(height.begin(), height.end());
    //cout << maxhurdle;
    if(maxhurdle > k)
        return maxhurdle-k;
    else
        return 0;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int result = hurdleRace(k, height);

    cout << result << "\n";

    return 0;
}
