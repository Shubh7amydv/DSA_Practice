class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        int ifpossible=n % k;
        if(ifpossible!=0) return false;

        int grps=n/k;

        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]> grps) return false;
        }

        return true;




    }
};