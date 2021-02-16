#include <bits/stdc++.h>

using namespace std;

// Complete the angryProfessor function below.
string angryProfessor(int k, vector<int> a) {

    int count = 0;
    
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] <= 0)
        {
            count++;
        }
    }
    
    if(count < k)
    {
        return "YES";
    }
    else 
    {
        return "NO";
    }

}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string result = angryProfessor(k, a);

        cout << result << "\n";
    }

    return 0;
}
