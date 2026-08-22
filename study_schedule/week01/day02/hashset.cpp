#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool hasTwoSum(const vector<int>& nums, int target) {
    unordered_set<int> seen;

    for (int x : nums) {
        int needed = target - x;

        if (seen.count(needed)) {
            return true;
        }

        seen.insert(x);
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

