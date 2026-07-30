class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        int n = s.size();
        string ans(n,' ');
        int left = 0,right = n-1;
        for(int i = 0;i < 26;i++){
            while(freq[i]>=2){
                ans[left++]=char(i+'a');
                ans[right--]=char(i+'a');
                freq[i]-=2;
            }
            if(freq[i]==1){
                ans[s.size()/2]=char(i+'a');
                freq[i]-=1;
            }
        }
        return ans;
    }
};