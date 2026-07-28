class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> myset;
        
        for(int i : nums) {
            if(myset.contains(i)) return true;
            myset.insert(i);
        }

        return false;
    }
};