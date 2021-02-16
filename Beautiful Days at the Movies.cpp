#include <bits/stdc++.h>

using namespace std;

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {

    int count = 0;
    
    for(int start = i; start <= j; start++)
    {
        int reverse = 0, index;
        int temp = start;
        
        while(temp > 0)
        {
            index = temp % 10;
            temp = temp / 10;
            
            reverse = (reverse * 10) + index;
        }
        
        if((start-reverse) % k == 0) count++;
    }
    
    return count;
}

int main()
{
    int i, j, k;
    cin >> i >> j >> k;

    int result = beautifulDays(i, j, k);

    cout << result << "\n";

    return 0;
}

