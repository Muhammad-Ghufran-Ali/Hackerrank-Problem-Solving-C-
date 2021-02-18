#include <bits/stdc++.h>

using namespace std;

// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {

    int choclates = n/c;
    int wrapers = choclates;
    
    while(wrapers >= m)
    {
        wrapers -= m;
        
        choclates++;
        
        wrapers++;
    }
    return choclates;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n, c, m;
        cin >> n >> c >> m;

        int result = chocolateFeast(n, c, m);

        cout << result << "\n";
    }

    return 0;
}
