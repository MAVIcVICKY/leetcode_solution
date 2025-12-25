class Solution {
public:

bool dochechk(unordered_map<char,int>&have,unordered_map<char,int>&need){

    for(auto it:need)
    {
        if(it.second>have[it.first])
        return false;
    }
    return true;
}




    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char,int>have;
        unordered_map<char,int>need;

        for(char ch:ransomNote)
        {need[ch]++;  
        }
        
        for(char ch:magazine)
        {
            have[ch]++;   
        }

       return dochechk(have,need);

    }
};