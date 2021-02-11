#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
    long bigSum = 0;
    
    for(int i = 0; i < ar.size(); i++)
    {
        bigSum += ar[i];
    }
    return bigSum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int ar_count;
    cin >> ar_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<long> ar(ar_count);

    for (int i = 0; i < ar_count; i++) {
        cin >> ar[i];
    }

    long result = aVeryBigSum(ar);

    fout << result << "\n";

    fout.close();

    return 0;
}
