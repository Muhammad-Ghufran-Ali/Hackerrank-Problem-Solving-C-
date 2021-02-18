#include <bits/stdc++.h>

using namespace std;

// Complete the funnyString function below.
string funnyString(string s) {

     string fun = "Funny";
    string reverse = s;

    for (int i = 0, n = s.length() - 1; i < s.length(); i++, n--)
    {
        reverse[i] = s[n];
    }

    for (int i = 0; i < s.length()-1; i++)
    {
        int diff_s = s[i] - s[i + 1];
        int diff_rs = reverse[i] - reverse[i + 1];
        if (diff_s < 0) diff_s *= -1;
        if (diff_rs < 0) diff_rs *= -1;
        if (diff_s != diff_rs)
        {
            fun = "Not Funny";
            break;
        }
    }

    return fun;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

