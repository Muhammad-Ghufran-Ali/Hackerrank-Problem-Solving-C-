#include <bits/stdc++.h>

using namespace std;

// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    
    int check_max = scores[0], check_min = scores[0];
    vector <int> record(2);
    
    for(int i = 1; i < scores.size(); i++)
    {
        if(scores[i] > check_max)
        {
            check_max = scores[i];
            record[0]++;
        }
        else if(scores[i] < check_min)
        {
            check_min = scores[i];
            record[1]++;
        }
    }
    
    return record;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    vector<int> result = breakingRecords(scores);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";
    
    return 0;
}
