//
//  lc_53.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/10/14.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_53_hpp
#define lc_53_hpp

#include <stdio.h>
#include <vector>

class Solution53{
public:
    int maxSubArray(vector<int> &nums){
        int sum = nums[0];
        int n = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (n > 0) n += nums[i];
            else n = nums[i];
            if (n > sum) sum = n;
        }
        return sum;
    }
    
};

#endif /* lc_53_hpp */
