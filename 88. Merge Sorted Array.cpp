class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Temporary vector to store the merged result
        vector<int> ans;
        int i = 0, j = 0;

        // Merge elements from nums1 and nums2
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            } else {
                ans.push_back(nums2[j]);
                j++;
            }
        }

        // Add remaining elements from nums1, if any
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }

        // Add remaining elements from nums2, if any
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }

        // Copy the merged result back to nums1
        nums1 = ans;
    }
};
