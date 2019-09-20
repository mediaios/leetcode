//
//  lc_26.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/20.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_26_hpp
#define lc_26_hpp

#include <stdio.h>
#include <vector>


class Solution26{
public:
    int removeDuplicates(vector<int> &nums){
        if (nums.size() == 0) {
            return 0;
        }
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
    
    
};

#endif /* lc_26_hpp */
