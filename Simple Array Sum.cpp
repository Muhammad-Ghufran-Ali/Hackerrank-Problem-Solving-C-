#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
    /*
     * Write your code here.
     */
    int sum = 0;
    for(int i = 0; i < ar.size(); i++)
    {
        sum += ar[i];
    }
    return sum;
}

int main()
{
    int ar_count;
    cin >> ar_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> ar(ar_count);

    for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
        cin >> ar[ar_itr];
    }

    int result = simpleArraySum(ar);

    cout << result << "\n";

    return 0;
}
