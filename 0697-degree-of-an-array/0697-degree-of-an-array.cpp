class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        int degree = 0;
        int current_length = n;

        for (int i = 0; i < n; i++) {
            int count = 1;
            int last = i;

            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                    last = j;
                }
            }

            int first = i;
            int length = last - first + 1;

            if (count > degree) {
                degree = count;
                current_length = length;
            }
            else if (count == degree) {
                current_length = min(current_length, length);
            }
        }

        return current_length;
    }
};