#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    
    for(int i = 0; i < n ; i++)
    {
        bool exist = false;
        for(int j = 0; j < n; j++)
        {
            exist = false;
            if(i > 0 && i < n-1 && j > 0 && j < n-1)
            {
                if(arr[i][j] > arr[i][j+1] && arr[i][j] > arr[i][j-1])
                {
                    if(arr[i][j] > arr[i-1][j] && arr[i][j] > arr[i+1][j])
                    {
                        exist = true;
                        cout << "X" ;
                    }
                }
            }
            if(exist == false)
            {
                cout << arr[i][j] ;
            }
        }
    
        cout << endl;
    }
}

