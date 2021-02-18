#include <bits/stdc++.h>

using namespace std;

// Complete the minimumDistances function below.
int minimumDistances(vector<int> a) {

    int min = INT16_MAX;
    bool exist = false;
    
    for(int i = 0; i < a.size()-1; i++)
    {
        for(int j = i+1; j < a.size(); j++)
        {
            if(a[i] == a[j])
            {
                exist = true;
                int temp = j-i;
                if(temp < min) min = temp;
            }
        }
    }
    if(exist) return min;
    else return -1;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = minimumDistances(a);

    cout << result << "\n";

    return 0;
}
