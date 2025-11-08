#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int subarraySum(vector<int>& nums, int targetSum) {
    unordered_map<int, int> sum_map;
    int current_sum = 0;
    int count = 0;
    
    // To handle the case where a subarray starts from the beginning
    sum_map[0] = 1;  
    
    for (int num : nums) {
        current_sum += num;
        
        // Check if there is a prefix sum that, when subtracted, gives the target sum
        if (sum_map.find(current_sum - targetSum) != sum_map.end()) {
            count += sum_map[current_sum - targetSum];
        }
        
        // Increment the frequency of the current cumulative sum
        sum_map[current_sum]++;
    }
    
    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 1, 1, 1};
    int sum = 3;
    cout << "Total number of subarrays: " << subarraySum(nums, sum) << endl;
    return 0;
}
