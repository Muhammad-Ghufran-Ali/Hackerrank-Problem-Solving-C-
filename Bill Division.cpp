#include <bits/stdc++.h>

using namespace std;

// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {

    int sum = 0;
    
    for(int i = 0; i < bill.size(); i++)
    {
        sum += bill[i];
    }
    int divide = sum/2;
    int extra = (sum - bill[k])/2;
    
    if(extra == b)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        cout << divide - extra << endl;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> bill(n);

    for (int i = 0; i < n; i++) {
        cin >> bill[i];
    }
    
    int b;
    cin >> b;

    bonAppetit(bill, k, b);

    return 0;
}

