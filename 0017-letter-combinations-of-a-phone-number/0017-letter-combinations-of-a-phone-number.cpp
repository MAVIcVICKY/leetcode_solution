class Solution {
public:


void fun(int n,string digits,int idx,string &temp,vector<string>&res,unordered_map<char,string>&mp)
{

if(idx==n)
{ res.push_back(temp);
return;}

string choice=mp[digits[idx]];
int m=choice.size();

for(int j=0;j<m;j++)
{
    temp.push_back(choice[j]);
    fun(n,digits,idx+1,temp,res,mp);
    temp.pop_back();
}

}


    vector<string> letterCombinations(string digits) {

        int n=digits.size();
        unordered_map<char,string>mp;
        
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";

        vector<string>res;
        string temp;

        fun(n,digits,0,temp,res,mp);

        return res;
        
    }
};