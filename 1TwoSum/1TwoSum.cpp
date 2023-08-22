//============================================================================
// Name        : LeetCode.cpp
// Author      : Kevin Trochez
// Version     :
// Copyright   : Your copyright notice
// Description : LeetCode problem 1 Two Sum
//============================================================================

#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> num_to_index;  // Use unordered_map to store mapping
        std::vector<int> result;

        for (int index = 0; index < nums.size(); ++index) {
            int num = nums[index];
            int complement = target - num;

            if (num_to_index.find(complement) != num_to_index.end()) {
                result.push_back(num_to_index[complement]);
                result.push_back(index);
                return result;
            }

            num_to_index[num] = index;  // Store the index of the current number
        }

        return result;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums1 = {2, 7, 11, 15};
	int target1 = 9;
	std::vector<int> result1 = solution.twoSum(nums1, target1);
	std::cout << "Example 1 Output: [" << result1[0] << ", " << result1[1] << "]" << std::endl;

	// Example 2
	std::vector<int> nums2 = {3, 2, 4};
	int target2 = 6;
	std::vector<int> result2 = solution.twoSum(nums2, target2);
	std::cout << "Example 2 Output: [" << result2[0] << ", " << result2[1] << "]" << std::endl;

	// Example 3
	std::vector<int> nums3 = {3, 3};
	int target3 = 6;
	std::vector<int> result3 = solution.twoSum(nums3, target3);
	std::cout << "Example 3 Output: [" << result3[0] << ", " << result3[1] << "]" << std::endl;

	std::vector<int> nums4 = {2, 3, 7, 11, 15, 33, 44, 60, 78};
	int target4 = 75;
	std::vector<int> result4 = solution.twoSum(nums4, target4);
	std::cout << "Example 3 Output: [" << result4[0] << ", " << result4[1] << "]" << std::endl;

	return 0;
}
