class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> seen;
    vector<int> unique;

    for (int num : nums) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            unique.push_back(num);
        }
    }

    nums = unique; 
    return nums.size();
    }
};
