//
//  main.cpp
//  LeetCode31_NextPermutations
//
//  Created by Rui on 1/17/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, j, n = nums.size();
        
        for(i = n - 2; i >= 0; i--)
        {
            if(nums[i + 1] > nums[i])
            {
                for(j = n - 1; j >= i; j--)
                {
                    if(nums[j] > nums[i])
                        break;
                }
                
                swap(nums[i], nums[j]);
                reverse(nums.begin() + i + 1, nums.end());
                return;
            }
        }
        
        reverse(nums.begin(), nums.end());
    }
};

