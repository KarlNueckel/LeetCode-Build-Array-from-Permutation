class Solution {
public:
    
    vector<int> buildArray(vector<int>& nums) {
        vector <int> ans;
        
        for(vector <int>::iterator it = nums.begin(); it!= nums.end(); it++){
            ans.push_back(nums[*it]);
        }
        return ans;
    }
};