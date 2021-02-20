#include <bits/stdc++.h>

using namespace std;

// Complete the insertionSort1 function below.
void insertionSort1(int n, vector<int> arr) {

    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[n-1])
        {
            //we need to insert value at i and shift elements toward right
            int value = arr[n-1];
            for(int j = n-1; j > i; j--)
            {
                arr[j] = arr[j-1];
                
                for(int k = 0; k < n; k ++)
                {
                    cout << arr[k] << " " ;
                }
                cout << endl;
            }
            arr[i] = value;    
        }
    }
    for(int k = 0; k < n; k ++)
    {
        cout << arr[k] << " " ;
    }
    cout << endl;
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

    insertionSort1(n, arr);

    return 0;
}

