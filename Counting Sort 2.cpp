#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> count(100);
    
    int n;
    cin >> n;
    
    int num;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        count[num]++;
    }
    
    for(int i = 0; i < 100; i++)
    {
        while(count[i] > 0)
        {
            cout << i << " ";
            count[i]--;
        }
    }
    
    return 0;
}
