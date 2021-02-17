#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long count = 0;
    //fails for time constraints
    //for(long i = 0; i < n; i++)
     //{
      //  if(s[i % s.size()] == 'a') count++;
       //}
       
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'a') count++;
    }
    long mul = n/s.size();
    count *= mul;
    
    long extra = n - mul*s.size();
    
    for(int i = 0; i < extra; i++)
    {
        if(s[i] == 'a') count++;
    }
    
    return count;
}

int main()
{
    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    cout << result << "\n";

    return 0;
}

