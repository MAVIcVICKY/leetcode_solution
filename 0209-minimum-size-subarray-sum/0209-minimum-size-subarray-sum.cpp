class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {

        int low=0;
        int n=arr.size();
        int sum=0;
        int minlen=INT_MAX;
        
        // int res=INT_MIN;

        for(int high=0;high<n;high++)
        {
        sum=sum+arr[high];
         while(sum>=target)
         { 
           int len=high-low+1;
            minlen=min(minlen,len);
            sum=sum-arr[low];
            low++;
         }
        
      

        }

        if(minlen==INT_MAX)
        return 0;
        else
        return minlen;
    }
};