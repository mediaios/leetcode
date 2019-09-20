//
//  lc_09.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/20.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_09_hpp
#define lc_09_hpp

#include <stdio.h>
#include <string.h>


class Solution09{
public:
    long revertNum(int x){
        if (x < 0) {
            return -1;
        }
        long res = 0;
        while (x != 0) {
            res = res*10 + x%10;
            x /= 10;
        }
        return res;
    }
    
    // t： 12ms   memory: 8.1M
    bool isPalindrome1(int x){
        long revX = revertNum(x);
        if (x < 0) return false;
        return revX == x;
    }
    
    // t: 20ms  memory: 8.1M
    bool isPalindrome2(int x){
        string num_str = to_string(x);
        for (int i = 0; i < num_str.length()/2; i++) {
            if (num_str[i] != num_str[num_str.length()-1-i]) {
                return false;
            }
        }
        return true;
    }
    
    bool isPalindrome(int x){
        return isPalindrome2(x);
    }
};


#endif /* lc_09_hpp */
