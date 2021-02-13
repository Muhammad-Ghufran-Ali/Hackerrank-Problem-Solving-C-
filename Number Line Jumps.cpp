#include <bits/stdc++.h>

using namespace std;

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
    
    int count = 10000;
    while(count > 0)
    {
        if(x1 > x2 && v1 > v2) return "NO";
        if(x2 > x1 && v2 > v1) return "NO";
        
        if(x1 == x2)
        {
            return "YES";
        }
        else
        {
            x1 += v1;
            x2 += v2;
        }
        
        count--;
    }    
    return "NO";
}

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;

    string result = kangaroo(x1, v1, x2, v2);

    cout << result << "\n";

    return 0;
}
