class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();

        int l=0;
        int r=0;
        int cnt=0;
        unordered_map<int,int> mp;

        while( r < n){

            mp[fruits[r]]++;

            // if invalid: shrink window until size <= 2
            while(mp.size() > 2){

                mp[fruits[l]]--;
                if(mp[fruits[l]]==0){
                    mp.erase(fruits[l]);
                }
                l++;

            }

            // window is valid here
            cnt=max(cnt,r-l+1);
            r++;

        }

        return cnt;
    }
};