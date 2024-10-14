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

//My Solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> v;
       int n = nums.size();
       for(int i = 0; i < n-1; i++){
            for(int j = i+1; j<n; j++) {
                if (nums[i] + nums[j] == target) {
                    v.push_back(i);
                    v.push_back(j);
                }
            }
       }
       return v;
    }
};