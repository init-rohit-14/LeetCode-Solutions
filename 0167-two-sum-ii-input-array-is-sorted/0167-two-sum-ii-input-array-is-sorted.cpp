
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int* first = &numbers[0];
        int* last = &numbers[numbers.size() - 1];
        vector<int> v;

        while (first <= last) {
            if ((*first + *last) == target) {
                v.push_back(first - &numbers[0] + 1);
                v.push_back(last - &numbers[0] + 1);
                break;
            } else if ((*first + *last) < target) {
                first++;
            } else {
                last--;
            }
        }
        return v;
    }
};