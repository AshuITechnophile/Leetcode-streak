class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        vector<int> temp;
        sort(nums.begin(),nums.end());
        int s = nums[0];
        int l = nums[n-1];
        for(int i = s ; i < l; i++){
            temp.push_back(i);
        }
        set_difference(
            temp.begin(),temp.end(),
            nums.begin(),nums.end(),
            back_inserter(ans)
        );
    return ans;
    }
};