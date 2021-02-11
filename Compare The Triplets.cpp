#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {

    vector <int> scores(2);
    
    for(int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
        {
            scores[0]++;
        }
        else if(b[i] > a[i])
        {
            scores[1]++;
        }
    }
    return scores;
}

int main()
{
    vector<int> a(3);

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }

    vector<int> result = compareTriplets(a, b);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << "\n";

    return 0;
}

