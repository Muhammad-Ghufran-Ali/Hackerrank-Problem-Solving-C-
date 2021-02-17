#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {

    int count = 0;
    int num = n;
    
    while(num > 0)
    {
        int temp = num % 10;
        num = num / 10;
        if(temp == 0) continue;
        if(n % temp == 0) count++;
    }
    
    return count;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        cout << result << "\n";
    }

    return 0;
}

