class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char,int>have;

        for(char ch:text)
        {
           have[ch]++;
        }

        unordered_map<char,int>need;

        need['b']=1;
        need['a']=1;
        need['l']=2;
        need['o']=2;
        need['n']=1;
        int ans=INT_MAX;

        for(auto it:need)
        {
            char ch=it.first;
            int fneed=it.second;
            int fhave=have[ch];
            
            int times=fhave/fneed;
            
            ans=min(ans,times);
        

        }

return  ans;
        
    }
};