#include <bits/stdc++.h>

using namespace std;

// Complete the palindromeIndex function below.

bool isPalindrome(const string& s)
{
    for (int i = 0, n = s.length() - 1; i < s.length() / 2; i++, n--)
    {
        if (s[i] != s[n])
            return false;
    }
    return true;
}

// Complete the palindromeIndex function below.
int palindromeIndex(string s) {
    int index = -1;
    string temp;
    if (isPalindrome(s))
        return index;

    for (int i = 0, n = s.length() - 1; i < s.length() / 2; i++, n--)
    {
        if (s[i] != s[n])
        {
            temp = s;
            index = i;
            if (isPalindrome(temp.erase(index, 1)) == true)
                return index;
            else
            {
                temp = s;
                index = n;
                if (isPalindrome(temp.erase(index, 1)) == true)
                    return index;
                else
                    return -1;
            }
        }
    }

    return -1;
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

        int result = palindromeIndex(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

