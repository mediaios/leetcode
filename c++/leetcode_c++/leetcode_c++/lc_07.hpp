//
//  lc_07.hpp
//  leetcode_c++
//
//  Created by ethan on 2019/9/19.
//  Copyright © 2019 ucloud. All rights reserved.
//

#ifndef lc_07_hpp
#define lc_07_hpp

#include <stdio.h>


class Solution07
{
public:
    int revertNum(int x)
    {
        int result = 0;
        while (x != 0) {
            int last = x%10;
            if (result > INT_MAX/10 || (result == INT_MAX / 10 && last > 7)) return 0;
            if (result < INT_MIN/10 || (result == INT_MIN / 10 && last < -8)) return 0;
            
            x /= 10;
            result = result*10 + last;
        }
        
        
        
        return result + x;
    }
};

#endif /* lc_07_hpp */
