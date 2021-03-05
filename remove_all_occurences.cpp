class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto itr= remove(nums.begin(), nums.end() , val);
        nums.erase(itr,nums.end());
        return nums.size();
    }
};
