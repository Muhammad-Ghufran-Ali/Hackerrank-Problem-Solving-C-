#include <bits/stdc++.h>

using namespace std;

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {

    if(abs(z-x) == abs(z-y))
    {
        return "Mouse C";
    }
    else if(abs(z-x) < abs(z-y))
    {
        return "Cat A";
    }
    else
    {
        return "Cat B";
    }
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int x, y, z;
        cin >> x >> y >> z;

        string result = catAndMouse(x, y, z);

        cout << result << "\n";
    }

    return 0;
}
