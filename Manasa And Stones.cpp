#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
vector<int> stones(int n, int a, int b) {

    vector <int> posibilities;
    
    for(int i = 0; i < n; i++)
    {
        int sumA = 0;
        int sumB = 0;
        bool exist = false;
        for(int j = i; j < n-1; j++)
        {
            sumA += a;
        }
        for(int j = 0; j < i; j++)
        {
            sumB += b;
        }
        
        for(int j = 0; j < posibilities.size(); j++)
        {
            if(posibilities[j] == sumA+sumB)
            {
                exist = true;
            }
        }
        if(!exist)
        {
            posibilities.push_back(sumA+sumB);
        }
    }
    sort(posibilities.begin(), posibilities.end());
    
    return posibilities;
}

int main()
{
    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            cout << result[i];

            if (i != result.size() - 1) {
                cout << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}

