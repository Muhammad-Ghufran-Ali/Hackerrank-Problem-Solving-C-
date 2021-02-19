#include <bits/stdc++.h>

using namespace std;

bool check(string a, string b){
    return a.length() == b.length() ? a < b : a.length() < b.length();
}

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {
    
    sort(unsorted.begin(),unsorted.end(),check);

    return unsorted;
}
//*****************************************
//               TIME FAIL
//*****************************************
//// Complete the bigSorting function below.
//vector<string> bigSorting(vector<string> unsorted) {
    
//    for (int i = 0; i < unsorted.size()-1; i++)
//    {
//        for (int j = i + 1; j < unsorted.size(); j++)
//        {
//            if (unsorted[i].size() > unsorted[j].size())
//            {
//                string temp = unsorted[i];
//                unsorted[i] = unsorted[j];
//                unsorted[j] = temp;
//            }
//            else if (unsorted[i].size() == unsorted[j].size())
//            {
//                if(unsorted[i] < unsorted[j])
//                {
//                   string temp = unsorted[i];
//                    unsorted[i] = unsorted[j];
//                }
//            }
//        }
//   }
//
//    return unsorted;
//}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    vector<string> result = bigSorting(unsorted);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

