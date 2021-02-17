#include <bits/stdc++.h>

using namespace std;

// Complete the permutationEquation function below.
vector<int> permutationEquation(vector<int> p) {

    vector <int> permutation(p.size());
    
    for(int x = 1; x <= p.size(); x++)
    {
        for(int j = 0; j < p.size(); j++)
        {
            if(p[j] == x)
            {
                for(int k = 0; k < p.size(); k++)
                {
                    if(p[k] == j+1)
                    {
                        permutation[x-1] = k+1;
                    }
                }
            }
        }
    }
    return permutation;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<int> result = permutationEquation(p);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}
