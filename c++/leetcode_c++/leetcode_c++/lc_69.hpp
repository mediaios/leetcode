//
//  lc_69.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/25.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_69_hpp
#define lc_69_hpp

#include <stdio.h>
#include <math.h>

class Solution69{
public:
    /*
     计算并返回 x 的平方根，其中 x 是非负整数。

     由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

     示例 1:

     输入: 4
     输出: 2
     示例 2:

     输入: 8
     输出: 2
     说明: 8 的平方根是 2.82842...,
          由于返回类型是整数，小数部分将被舍去。
     
     
     t:  32ms   m: 8.2M
     */
    int mySqrt(int x){
        if (x == 1 || x == 2 || x == 3) return 1;
        
        const int MAX_INT_V = 0x7FFFFFFF;
        int maxV = sqrt(MAX_INT_V);
        if (x >= MAX_INT_V) return maxV;
        int res = 0;
        for (unsigned int i = 2; i <= x/2; i++) {
            if (i >= maxV) {
                res = maxV;
                break;
            }
            if (i*i == x) res = i;
            if (i*i < x && (i+1)*(i+1) > x) {
                res = i;
                break;
            }
        }
        return res;
    }
};

#endif /* lc_69_hpp */
