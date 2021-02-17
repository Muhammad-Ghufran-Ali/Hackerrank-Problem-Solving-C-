#include <bits/stdc++.h>

using namespace std;

// Complete the circularArrayRotation function below.
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {

    vector <int> circular(queries.size());
    k %= a.size();
    for(int i = 0; i < queries.size(); i++)
    {
        circular[i] = a[(a.size() - k + queries[i]) % a.size()];
        //cout << (a.size() - k + queries[i]) % a.size() << " ";
    }
    //cout << endl;
    return circular;
}

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> queries(q);

    for (int i = 0; i < q; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<int> result = circularArrayRotation(a, k, queries);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}

