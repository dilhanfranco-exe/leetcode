// Dilhan Franco - Two Sum Solution - Easy
// 10/08/2022

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //iterate through the nums vector starting at the first digit
        for(int i = 0; i < nums.size(); i++) {
            //iterate through the nums vector starting at the second digit
            for (int j = i + 1; j < nums.size(); j++){
                //adds i and j to verify whether they are equal to the target or not
                if(nums[i] + nums[j] == target){
                    //returns numbers that add up to the target
                    return {i,j};
                }
            }
        }
        return {};
    }
};