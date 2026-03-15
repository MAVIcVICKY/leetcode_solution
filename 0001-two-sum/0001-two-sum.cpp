class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // vector<int>res;
        // int n=nums.size();

        // unordered_map<int,int>mp;

        // for(int i=0;i<n;i++)
        // {
        //     int need=target-nums[i];

        //     if(mp.find(need)!=mp.end())
        //     {
        //         res.push_back(mp[need]);
        //         res.push_back(i);
        //     }
        //     mp[nums[i]]=i;
        // }




vector<int>res;  //vector chaiye ek jha result store krega.

unordered_map<int,int>mp;  //map bnayga ek jha joa needed hai with 

int n=nums.size();

for(int i=0;i<n;i++)
{
   int need=target-nums[i];

    if(mp.find(need)!=mp.end())
    {
        res.push_back(i);
        res.push_back(mp[need]);
    }
mp[nums[i]]=i;
}

        
    return res;
    }
    
};