#include <bits/stdc++.h>

using namespace std;

int main()
{
    long t;
    cin >> t;

    long value = 3;
    
    while(t > value)
    {
        t-=value;
        value *= 2;
    }

    cout << value-t+1 << "\n";

    return 0;
}

