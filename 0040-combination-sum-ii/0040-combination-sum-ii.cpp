class Solution {
public:


void fun( int i,int sum,vector<int>&candidates,vector<vector<int>>&res,vector<int>&temp,int target)
{

if(sum==target)
{
    res.push_back(temp);
    return;
}
if(sum>target)
{
return;
}

for(int j=i;j<candidates.size();j++)
{

   if(j>i && candidates[j]==candidates[j-1])
   continue;
   
    temp.push_back(candidates[j]);
    fun(j+1,sum+candidates[j],candidates,res,temp,target);
    temp.pop_back();

}
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        vector<vector<int>>res;
        vector<int>temp;

       sort(candidates.begin(),candidates.end());
        fun(0,0,candidates,res,temp,target);
        return res;
        
    }

};