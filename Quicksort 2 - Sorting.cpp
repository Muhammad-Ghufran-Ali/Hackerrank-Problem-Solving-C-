#include <bits/stdc++.h>
using namespace std;


void quickSort(vector <int> &arr) {
	// Complete this function
    if(arr.size() < 2)
    {
        return;
    }
    
    vector<int> left, right;
    
    int pivot = arr[0];
    
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < pivot)
        {
            left.push_back(arr[i]);
        }
        else if(arr[i] > pivot)
        {
            right.push_back(arr[i]);
        }
    }
    
    quickSort(left);
    quickSort(right);
    
    for(int i = 0; i < left.size(); i++)
    {
        arr[i] = left[i];
        cout << left[i] << " " ;
    }
    
    arr[left.size()] = pivot;
    
    cout << pivot << " ";
    
    for(int i = 0; i < right.size(); i++)
    {
        arr[i+left.size()+1] = right[i];
        cout << right[i] << " " ;
    }
    
    
    cout << endl;
    return;
}


int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}
