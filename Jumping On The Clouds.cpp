#include <iostream>
#include<vector>

using namespace std;

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c, int k) {

    int power = 100;

    for (int index = k; ; index += k)
    {
        if (index >= c.size())
        {
            index %= c.size();
        }
        if (c[index] == 1)
        {
            power -= 2;
        }
        power--;

        if (index == 0) break;
    }

    return power;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int result = jumpingOnClouds(c, k);

    cout << result << "\n";

    return 0;
}
