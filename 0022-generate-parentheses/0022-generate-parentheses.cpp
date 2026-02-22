class Solution {
public:


void recurse(int n,int open,int closed,vector<string>&res,string&temp)
{
    if(open==n && closed ==n)
    {
    res.push_back(temp);
    return;
    }

    if(open<n)
    {temp.push_back('(');
    recurse(n,open+1,closed,res,temp);
    temp.pop_back();
    }


    if(closed<n && closed<open)
    {temp.push_back(')');
    recurse(n,open,closed+1,res,temp);
    temp.pop_back();
    }
    
    
    
}
    vector<string> generateParenthesis(int n) {

        vector<string>res;
    
        string temp;

         recurse(n,0,0,res,temp);
         return res;
        
    }

};