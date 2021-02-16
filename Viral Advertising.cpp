#include <bits/stdc++.h>

using namespace std;

// Complete the viralAdvertising function below.
int viralAdvertising(int n) {
    
    int share = 5;
    int liked = 2;
    int commulative = 2;
    
    for(int i = 2; i <= n; i++)
    {
        //cout << share << endl;
        share = (share/2)*3;
        liked = share / 2;
        commulative += liked;
        
    }
    
    return commulative;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    cout << result << "\n";

    return 0;
}

