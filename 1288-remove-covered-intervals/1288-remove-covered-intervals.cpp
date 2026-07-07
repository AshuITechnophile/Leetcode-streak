class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int>b){
            if(a[0]== b[0]){
                return a[1] > b[1];
            }

            return a[0] < b[0];
        });

        for(int i =0; i < intervals.size(); i++){
            for(int j = 0; j < intervals[i].size(); j++){
                cout << intervals[i][j]<<" ";
            }
            cout <<endl;
        }
        int c= 0, right = 0;
        for(auto x : intervals){
            if(x[1] > right){
                c++;
                right = x[1];
            }
        }
        return c;
    }
};