//
//  lc_01.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/19.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_01_hpp
#define lc_01_hpp

#include <stdio.h>
#include <vector>
#include <map>
using namespace std;


class Solution01
{
public:
    vector<int> twoSum(vector<int> &nums,int target)
    {
        {
            map<int,int> a;
            vector<int> b(2,-1); // 存放结果
            for (int i = 0; i < nums.size(); i++) {
                if (a.count(target-nums[i]) > 0) {
                    b[0] = a[target - nums[i]];
                    b[1] = i;
                    break;
                }
                a[nums[i]] = i;
            }
            
            return b;
        }
    }
    
    vector<int> twoNumSum(vector<int> &nums,int target){
        vector<int> b(2,-1);  // 存放结果
        map<int,int> a;
        for (int i = 0; i < nums.size(); i++) {
            if (a.count(target-nums[i]) > 0) {
                b[0] = a[target - nums[i]];
                b[1] = i;
                break;
            }
            
            a[nums[i]] = i;
        }
        return b;
        
    }
    
};

#endif /* lc_01_hpp */
