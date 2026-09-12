class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int size=nums.size();
        int j = size ;

        for (i = 0; i < size - 1; i++) {
            j = size - 1;
            while (j != i) {
                if ((nums[i] + nums[j]) == target) {
                   return{i,j};
                }
                j--;
            }
        }
        return {};
    }
};