//
//  lc_58.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/25.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_58_hpp
#define lc_58_hpp

#include <stdio.h>
#include <string>

class Solution58{
public:
    /*
     输入: "Hello World"
     输出: 5
     
     输入: "a "
     输出: 1
     
     t: 4ms   m: 8.7M
     */
    int lengthOfLastWord(string s){
        int len = (int)s.length();
        int res = 0;
        while (len > 0) {
            char c = s[--len];
            if (c == ' ') {
                break;
            }
            res++;
        }
        
        if (res == 0 && len > 0) {
            while (len > 0) {
                char c = s[--len];
                if (c != ' ') {
                    res++;
                }
                
                if (res != 0 && c == ' ') {
                    break;
                }
            }
        }
        
        return res;
    }
};

#endif /* lc_58_hpp */
