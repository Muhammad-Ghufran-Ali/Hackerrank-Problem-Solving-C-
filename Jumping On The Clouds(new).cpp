#include <bits/stdc++.h>

using namespace std;

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {

    int count = 0;
    
    for(int i = 0; i < c.size(); )
    {
        if(i == c.size()-2) 
        {
            i++;
        }
        else
        {
            i+=2;
        }
        if(i >= c.size()) break;
        if(c[i] == 1)
        {
            i--;
        }
        
        count++;
    }
    
    return count;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    int result = jumpingOnClouds(c);

    cout << result << "\n";

    return 0;
}

