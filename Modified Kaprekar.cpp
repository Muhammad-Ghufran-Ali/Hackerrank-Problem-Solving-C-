#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
void kaprekarNumbers(int p, int q) {

    bool exist = false;
    for(int i = p; i <= q; i++)
    {
        string d = to_string(i);
        int d_digits = d.size();
        string square_string = to_string(long(i)*(long)i);
        
        int right = 0, left = 0;
        
        int j;
        
        for(j = 0; j < square_string.size() - d_digits; j++)
        {
            left = left * 10 + square_string[j]-48;
        }
        for( ; j < square_string.size(); j++)
        {
            right = right * 10 + (square_string[j])-48;
        }
        
        if((left+right == i && right != 0) || i == 1)
        {
            exist = true;
            cout << i << " ";
        }
    }
    
    if(!exist)
    {
        cout << "INVALID RANGE";
    }
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}

