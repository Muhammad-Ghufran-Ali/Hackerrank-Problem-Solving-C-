#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string newtime;
    if(s[s.size()-2] == 'A')
    {
        if(s[0] == '1' && s[1] == '2')
        {
            newtime = "00";
            newtime.append(s.substr(2,6));
        }
        else
        {
            newtime = s.substr(0,s.size()-2);
        }
    }
    else
    {
        string hours = s.substr(0,2);
        int h = stoi(hours);
        
        if(h == 12)
        {
            newtime = s.substr(0,s.size()-2);
        }
        else
        {
            h += 12;
            newtime = to_string(h);
            newtime.append(s.substr(2,6));
        }
    }
    return newtime;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

