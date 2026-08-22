#include <iostream>
#include <vector>
using namespace std;

bool hasTwoSum(const vector<int>& nums, int target) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    if (hasTwoSum(nums, target)) {
        std::cout << "Found two numbers that add up to " << target << std::endl;
    } else {
        std::cout << "No two numbers found that add up to " << target << std::endl;
    }

    return 0;
}