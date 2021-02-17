#include <bits/stdc++.h>

using namespace std;

// Complete the saveThePrisoner function below.
int saveThePrisoner(int n, int m, int s) {

    int savePrisoner = s-1+m;
    
    savePrisoner %= n;
    
    if(savePrisoner != 0)
        return savePrisoner;
    else
        return n;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n, m, s;
        cin >> n >> m >> s;

        int result = saveThePrisoner(n, m, s);

        cout << result << "\n";
    }

    return 0;
}
