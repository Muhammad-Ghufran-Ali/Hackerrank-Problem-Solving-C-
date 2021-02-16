#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
    
    bool stillexist = true;
    while(stillexist == true)
    {
        int sizeS = s.size();
        stillexist = false;
        for(int i = 0; i < sizeS-1; i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i,2);
                stillexist = true;
            }
        }
    }
    
    if(s != "")
        return s;
    else return "Empty String";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

