#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {

    int count = 0;

    int modules = s.length() / 3;
    string expected;
    
    for (int i = 0; i < modules; i++)
    {
        expected += "SOS";
    }

    for (int i = 0; i < expected.length(); i++)
    {
        if (expected[i] != s[i])
        {
            count++;
        }
    }
   
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

