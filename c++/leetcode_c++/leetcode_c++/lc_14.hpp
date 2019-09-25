//
//  lc_14.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/25.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_14_hpp
#define lc_14_hpp

#include <stdio.h>
#include <vector>
#include <string>

class Solution14{
    public :
    /*
     输入: ["flower","flow","flight"]
     输出: "fl"
     
     t: 8ms  m:8.7ms
     */
    string longestCommonPrefix(vector<string> &strs){
        string res = "";
        int nums = (int)strs.size();
        if (nums == 0) return res;
        int begin  = -1;
        int flen = (int)strs[0].length();
        for (int i = 0; i < flen; i++) {
            char c0 = strs[0][i];
            bool isEquals = true;
            for (int n = 1 && isEquals; n < nums; n++) {    // n-1次扫描
                if (strs[n][i] != c0 ) {
                    isEquals = false;
                }
            }
            
            if (isEquals == false) {
                begin = i-1;
                break;
            }else{
                res.push_back(c0);
                begin = i;
            }
            
        }
        return res;
    }
};

#endif /* lc_14_hpp */
