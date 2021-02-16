#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */

//**************************************
//fails at TEST case 8 due to time limit.
//***************************************

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    
    vector <int> leaderboard(player.size());
    
    int rank = 1;
    int lastrecord = 0;
    for(int i = player.size()-1; i >= 0; i--)
    {
        for(int j = lastrecord; j < ranked.size(); j++)
        {
            if(player[i] >= ranked[j])
            {
                lastrecord = j;
                break;
            }
            else 
            {
                //if(player[i] < ranked[j])
                rank++;
            }
            
            if((ranked[j] == ranked[j+1]) && (j != ranked.size()-1) && (rank != 1))
            {
                rank--;
            }
        }
        leaderboard[i] = rank;
    }
    return leaderboard;
}

int main()
{
    int ranked_count;
    cin >> ranked_count;

    vector<int> ranked(ranked_count);

    for (int i = 0; i < ranked_count; i++) {
        cin >> ranked[i];
    }

    int player_count;
    cin >> player_count;

    vector<int> player(player_count);

    for (int i = 0; i < player_count; i++) {
        cin >> player[i];
    }

    vector<int> result = climbingLeaderboard(ranked, player);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    cout << "\n";
    
    return 0;
}

