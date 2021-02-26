#include<iostream>

using namespace std;


int findmax(int arr[], int top)
{
    int max = -INT16_MAX;
    for(int i = 0; i <= top; i++)
    {
        int temp = arr[i];
        if(temp > max) max = temp;
    }

    return max;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    int data[100000];
    int top = -1;
    int number;
    int max = 0;
    int query;

    for (int i = 1; i <= N; i++)
    {
        cin >> query;
        
        if(query == 1)
        {
            cin >> number;
            data[++top] = number;
            if(number > max) max = number;
        }
        else if(query == 2)
        {
            if(data[top] == max)
            {
                top--;
                max = findmax(data, top);
            }
            else top--;
        }
        else
        {
            cout << max << endl;
        }
    }

    return 0;
}

