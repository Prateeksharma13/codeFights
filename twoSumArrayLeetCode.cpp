class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a,b;
        vector<int> answer;
        for(int i = 0; i < nums.size(); i++) {
                a = nums[i];
                for(int j = 0; j < nums.size(); j++) {
                    if(i == j) {
                        continue;
                    }
                    if(a+nums[j] == target) {
                        answer.push_back(i);
                        answer.push_back(j);
                        return answer;
                    }
            }
        }        
    }
};
