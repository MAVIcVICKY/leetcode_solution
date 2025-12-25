class Solution {
public:
    int longestPalindrome(string s) {

unordered_map<char,int>f;

for(char ch:s)
{
    f[ch]++;
}

int res=0;
bool oddmila=false;

for(auto it:f)
{
    int val=it.second;
    if(val%2==0)
    {
        res=res+val;
    }
    else
    {
        res=res+(val-1)
    oddmila=true;
    }

}

if(oddmila==false)
return res;
else
return res+1;
        
    }
};