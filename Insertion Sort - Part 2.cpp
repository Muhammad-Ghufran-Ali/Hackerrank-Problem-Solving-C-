#include <bits/stdc++.h>

using namespace std;

// Complete the insertionSort2 function below.
void insertionSort2(int n, vector<int> arr) {

    for(int i = 1; i < n; i++)
    {
        int value = arr[i];
        for(int j = i; j >= 0; j--)
        {
            if(value < arr[j-1])
            {
                arr[j] = arr[j-1];
            }
            else
            {
                arr[j] = value;
                break;
            }
        }
        
        for(int k = 0; k < n; k++)
        {
            cout << arr[k] << " " ;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort2(n, arr);

    return 0;
}
