// Problem link: https://leetcode.com/problems/two-sum/description/

#include "../all_headers.h"
using namespace std;

class TwoSum{
    // This function finds two indices of the numbers in the array that add up to the target.
    // It uses a hash map to store the numbers and their indices for quick lookup.
    // Time complexity: O(n), where n is the number of elements in the array.
    // Space complexity: O(n), for storing the hash map.
    // The function returns a vector of two integers representing the indices of the two numbers.   
public:
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> sum_map;
    for (int i = 0; i < nums.size(); ++i) {
        int diff = target-nums[i];
        if (sum_map.find(nums[i]) == sum_map.end()) {
            // std::cout << "vals: " << sum_map[diff] << "  " << nums[i];
            sum_map[diff] = i;
        }
        else {
            // std::cout << "vals: " << sum_map[diff] << i;
            return {sum_map[nums[i]], i};
        }
    }		
    return {}; // Return an empty vector if no solution is found
}
};

int main() {
    TwoSum solution; // Create an instance of the TwoSum class
    vector<int> nums = {2, 4, -13, 7, 11, 15}; // Example input array
    int target = 26; // Example target value
    vector<int> result = solution.twoSum(nums, target); // Call the twoSum function
    cout << "Indices: " << result[0] << ", " << result[1] << endl; // Output the result
    return 0; // Return success
}   