class Solution {
public:
    int maxProduct(int n) {
        vector<int>nums;
        int temp = n ;
        while(temp!=0){
            int rev = temp%10;
            nums.push_back(rev);
            temp = temp /10;
        }
        int l = nums.size();
        int max = 0;
        for(int i = 0;i < l;i++){
            for(int j = i+1; j<l;j++){
                int sum = nums[i]*nums[j];
                if(max<sum){
                    max = sum;
                } 
            }
        }
        return max;
    }
};