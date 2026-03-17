class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        unordered_map<int,int>f;
        int n=nums.size()/3;
        vector<int>res;


        for(int num:nums)
        {
            f[num]++;
        }

        for(auto it: f)
        {
            if(it.second >n)
            {res.push_back(it.first);
            }
        }



        return res;
    }
};