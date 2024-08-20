class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        int index = 0;
        for(auto it=nums.begin(); it!=nums.end(); it++){
            int indexPlus = index +1;
            int compliment = target - *(it);
            for(auto i = it+1; i!=nums.end(); i++){
                if(*(i) == compliment) {
                    indices.push_back(index);
                    indices.push_back(indexPlus);
                    return indices;
                }
                else {
                    indexPlus++;
                }
            }
            index++;
        }
        return {};
    }
};