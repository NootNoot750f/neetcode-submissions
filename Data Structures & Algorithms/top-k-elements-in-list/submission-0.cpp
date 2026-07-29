class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> numCounts;
        vector<pair<int, int>> frequencyList;
        vector<int> commonNums;
        for(int num : nums){
            numCounts[num]++;
        }
        //num gives a pair
        for(auto num : numCounts){
            frequencyList.push_back(num);
        }
        sort(frequencyList.begin(), frequencyList.end(),
            [](pair<int,int>&a, pair<int, int>&b){
                return a.second > b.second;
            }
        );
        for(int i = 0; i < k; i++){
            commonNums.push_back(frequencyList[i].first);
        }
        return commonNums;
    }
};
