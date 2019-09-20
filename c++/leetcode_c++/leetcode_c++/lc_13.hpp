//
//  lc_13.hpp
//  leetcode_c++
//
//  Created by ethan on 2019/9/20.
//  Copyright © 2019 ucloud. All rights reserved.
//

#ifndef lc_13_hpp
#define lc_13_hpp

#include <stdio.h>
#include <string.h>

class Solution13{
public:
    int romanToInt(string s){
        int num = 0;
        int s_len = s.length();
        for (int i = 0; i < s_len-1; i++) {
            switch (s[i]) {
                case <#constant#>:
                    <#statements#>
                    break;
                    
                default:
                    break;
            }
        }
        return 0;
    }
};

#endif /* lc_13_hpp */
