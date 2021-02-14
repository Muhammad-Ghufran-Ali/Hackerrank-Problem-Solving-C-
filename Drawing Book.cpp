#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int totalMoves = n / 2;
     int front = p/2;
    
    if(front < totalMoves/2+1)
    {
        return front;
    }
    else
    {
        return totalMoves-front;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    cout << result << "\n";

    return 0;
}

