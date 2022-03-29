class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n=nums.size();
        sort(nums.begin(),nums.end());
      int i,k=1;
        for(i=0;i<n;i++)
        {
            if(nums[i]==k)
            {
                k++;
            }
            
            
        }
        return k;
        
    }
};
