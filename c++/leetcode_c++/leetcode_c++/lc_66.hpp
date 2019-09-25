//
//  lc_66.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/25.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_66_hpp
#define lc_66_hpp

#include <stdio.h>
#include <vector>

class Solution66{
public:
    /*
     输入: [1,2,3]
     输出: [1,2,4]
     解释: 输入数组表示数字 123。
     
     
     t: 4ms    m: 8.6M
     */
    vector<int> plusOne(vector<int>& digits){
        vector<int> res;
        int temp = 0;
        int len = (int)digits.size();
        
        while (len > 0) {
            int m = len==digits.size() ? (digits[len-1] + 1 + temp) : digits[len-1] + temp;
            if (m>=10) {
                temp = m/10;         // 的到进位   1
                digits[len-1] = m%10;  // 得到个位
            }else{
                digits[len-1] = m;
                temp = 0;
            }
            len--;
        }
        if (temp == 1) {
            vector<int>::iterator it;
            it = digits.begin();
            digits.insert(it,1);
        }
        return digits;
    }
};

#endif /* lc_66_hpp */
