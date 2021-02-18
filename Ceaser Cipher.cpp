#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {

    string encrypt = s;

    for (int i = 0; i <= s.length(); i++) {
        //check if character is a a-z letter
        if (s[i] >= 97 && s[i] <= 122) 
        { 
            //if s[i] is 'm' ->ascii value 109.
            //then equation below will be like.
            //(((109-97) + 2 ) % 26 + 97
            //((14 % 26 + 97
            //14 + 97
            //111 -> 'o'
            encrypt[i] = (((s[i] - 97) + k) % 26) + 97; 
        }
        //check if character is A-Z letter
        else if (s[i] >= 65 && s[i] <= 90) 
        { 
            encrypt[i] = (((s[i] - 65) + k) % 26) + 65;
        }
        else
        {
            encrypt[i] = s[i];
        }
    }
    return encrypt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
