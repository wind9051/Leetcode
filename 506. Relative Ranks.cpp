class Solution {
public:
    string medel[4] = {" ", "Gold Medal", "Silver Medal", "Bronze Medal"};
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> Q;
        
        for (int i = 0; i < score.size(); i++) Q.push({score[i], i});
        
        int rank = 1;
        vector<string> ret(score.size());
        while (!Q.empty()) {
            if (rank <= 3) ret[Q.top().second] = medel[rank];
            else ret[Q.top().second] = to_string(rank);
            Q.pop();
            rank++;
        }
        
        return ret;
    }
};
