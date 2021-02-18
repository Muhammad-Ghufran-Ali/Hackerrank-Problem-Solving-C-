#include <bits/stdc++.h>

using namespace std;

// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {

    int special = 0;
    int pageno = 0;
    int ques = 0;
    int problem;
    
    for(int i = 0; i < n; i++)
    {
        problem = 1;
        ques = arr[i];
        pageno++;
        while(ques > 0) 
        {
            ques--;
            if(problem == pageno) special++;
            if(problem % k == 0 && ques != 0) {
                pageno++;
            }
            problem++;
        }
        
    }
    
    return special;
    
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = workbook(n, k, arr);

    cout << result << "\n";

    return 0;
}
