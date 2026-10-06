class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {

                if (nums1[i] == nums2[j]) {

                    bool found = false;

                    for (int k = 0; k < num.size(); k++) {
                        if (num[k] == nums1[i]) {
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                        num.push_back(nums1[i]);

                    break;
                }
            }
        }

        return num;
    }
};