#include <bits/stdc++.h>

using namespace std;

// Complete the fairRations function below.
void fairRations(vector<int> B) {

    int count = 0;
    int sum = 0;
    for(int i = 0; i < B.size(); i++) sum+=B[i];
    
    if(sum % 2 != 0) 
    {
        cout << "NO" << endl;
        return;
    }
    else {
    for(int i = 0; i < B.size(); i++)
    {
        if(B[i] % 2 != 0)
        {
            B[i] = B[i] +1;
            B[i+1] = B[i+1] + 1;
            count+=2;
        }
    }
    }
    cout << count << endl;
}

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    fairRations(B);

    return 0;
}

