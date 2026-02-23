class Solution {
public:

void fun(int idx,int sum,vector<int> &candidates,int &target, vector<int>&temp, vector<vector<int>>&res)
{
    if(sum==target)
    {
    res.push_back(temp);
    return;
    }

    if(sum>target)
    return;

    for(int i=idx;i<candidates.size();i++)
    {
      
       
        temp.push_back(candidates[i]);
        fun(i,sum+candidates[i],candidates,target,temp,res);
        temp.pop_back();
       
        

        
    }
}
    


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int>temp;
        vector<vector<int>>res;

        fun(0,0,candidates,target,temp,res);

        return res;
        
    }
};