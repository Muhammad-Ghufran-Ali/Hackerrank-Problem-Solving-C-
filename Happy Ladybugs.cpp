#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b) {

    int space_count = 0;
    vector <int> alpha(26);
    
    for(int i = 0; i < b.size(); i++)
    {
        if(b[i] == '_')
        {
            space_count++;
        }
        else
        {
            alpha[static_cast<int>(b[i]) - 65]++;
        }
    }
    
    if(space_count > 0)
    {
        for(int i = 0; i < 26; i++)
        {
            if(alpha[i] == 1)
            {
                return "NO";
            }
        }
        return "YES";
    }
    else
    {
        for(int i = 0; i < b.size(); i++)
        {
            if(b[i] != b[i+1])
            {
                if(b[i] != b[i-1])
                {
                    return "NO";
                }
            }
        }
        return "YES";
    }
    
}

int main()
{
    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        cout << result << "\n";
    }

    return 0;
}

