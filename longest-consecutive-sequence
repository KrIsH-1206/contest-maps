class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi = 0, cnt = 0;
        set <int> a(nums.begin(), nums.end());
        for (auto i : a)
        {
            if ( a.find(i-1)==a.end() ) {
                int j = i;
                cnt = 0;
                while ( a.find(j)!=a.end() ) {
                    j++;
                    cnt++;
                }
                maxi = cnt>maxi ? cnt : maxi;
            }
        }
        return max(maxi, cnt);
    }
};
