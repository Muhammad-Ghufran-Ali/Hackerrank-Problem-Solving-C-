#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {

    if(k >= (s.size()+t.size())) return "Yes";

    int count_same;
    for(count_same = 0; count_same < s.size() && count_same < t.size(); count_same++)
    {
        if(s[count_same] != t[count_same])
        {
            break;
        }
    }
    count_same--;
    //delete characters...
    k -= (s.size() - count_same);
    //append characters...
    k -= (t.size() - count_same);
    
    if(k % 2 == 0)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

