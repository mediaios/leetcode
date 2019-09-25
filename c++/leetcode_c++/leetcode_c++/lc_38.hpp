//
//  lc_38.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/24.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_38_hpp
#define lc_38_hpp

#include <stdio.h>
#include <string.h>
using namespace std;

class Solution38{
public:
    // 根据一个字符串，返回各个数字的个数，
    string readNum(string s){
        char *p = &s[0];
        int nums = 0;
        int len = (int)s.length();
        int index = 0;
        string res = "";
        while (index++ < len) {
            if (*p != '\n') {
                if (nums == 0) nums = 1;
            }
            
            if (*(p+1) != '\n' ) {
                if (*p == *(p+1)) {
                    nums++;
                    p++;
                }else{
                    res.push_back(nums+'0');
                    res.push_back(*p);
                    p++;
                    nums = 0;
                }
               
            }
        }
        return res;
    }
    
    // t: 12ms   m: 10.6M
    string countAndSay(int n){
        map<int,string> res;
        for (int i = 1; i <= 30; i++) {
            if (i == 1)
                res[i] = "1";
            else{
                res[i] = readNum(res[i-1]);
            }
                
        }
        return res[n];
    }
};

#endif /* lc_38_hpp */
