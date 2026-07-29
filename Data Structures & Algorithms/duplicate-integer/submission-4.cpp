class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen; //Have a map of numbers seen so far
        for(int num : nums){ //For each number in nums
            if(seen.find(num) != seen.end()){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }

};