//
//  lc_27.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/20.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_27_hpp
#define lc_27_hpp

#include <stdio.h>
#include <vector>

class Solution27{
public:
    // t: 0ms   m: 8.5M
    int removeElement(vector<int> &nums,int val){
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

#endif /* lc_27_hpp */
