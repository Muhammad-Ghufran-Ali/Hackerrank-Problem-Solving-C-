#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

    vector <int> alphaCount(26);

    for (int i = 0; i < s.length(); i++)
    {   
        alphaCount[(static_cast<int>(s[i]) - 97) % 26]++;
    }

    sort(alphaCount.begin(), alphaCount.end(), greater<int>());
    
    int maximum = alphaCount[0];
    int index = 25;
    int minimum;
    if(alphaCount[index] == 0)
    {
        while(alphaCount[index] == 0)
        {index--;}
        
    }
    minimum = alphaCount[index];
    
    cout << maximum << " " << minimum << endl;
    
    if (maximum == minimum || maximum == alphaCount[index-1])
    {
        return "YES";
    }
    else
    {    
        maximum--;
        if(maximum == minimum && maximum == alphaCount[1])
        {
            return "YES";
        }
        else
        {
            return "NO";  
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

