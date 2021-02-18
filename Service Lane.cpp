#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int t;
    cin >> t;
    
    vector<int> width(n);

    for (int i = 0; i < n; i++) {
        int width_item;
        cin >> width_item;

        width[i] = width_item;
    }

    vector<vector<int>> cases(t);
    for (int i = 0; i < t; i++) {
        cases[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> cases[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result;
    
    for(int i = 0; i < cases.size(); i++)
    {
        int start = cases[i][0];
        int end = cases[i][1];
        int min = INT_MAX;
        
        for(int k = start; k <= end; k++)
        {
            if(width[k] < min) min = width[k];
        }
        result.push_back(min);
    }
    
    
    
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}
