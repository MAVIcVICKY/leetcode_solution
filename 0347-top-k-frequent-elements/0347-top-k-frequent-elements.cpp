class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        // min-heap by frequency
        struct cmp {
            bool operator()(const pair<int,int>& a,
                            const pair<int,int>& b) {
                return a.first > b.first; // smaller freq on top
            }
        };

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            cmp
        > pq;

        for (auto &it : freq) {
            int num = it.first;
            int frq = it.second;

            pq.push({frq, num});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        vector<int> res;
        while (!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};
