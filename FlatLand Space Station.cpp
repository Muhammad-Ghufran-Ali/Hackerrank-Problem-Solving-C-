#include <bits/stdc++.h>

using namespace std;

// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int n, vector<int> c) {
    
    sort(c.begin(), c.end());
    
    int maxDistance = c[0], temp = 0;
    
    for(int i = 1; i < c.size(); i++)
    {
        temp = (c[i] - c[i-1]) / 2;
        if(temp > maxDistance) 
        {
            maxDistance = temp;
        }
    }
    
    int lastSpaceSt = n - 1 - c[c.size()-1];
    if(lastSpaceSt > maxDistance)
        maxDistance = lastSpaceSt;
    
    return maxDistance;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> c(m);

    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    int result = flatlandSpaceStations(n, c);

    cout << result << "\n";

    return 0;
}

