//
//  lc_198.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/10/14.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_198_hpp
#define lc_198_hpp

#include <stdio.h>
#include <vector>

class Solution198{
public:

    
    /**
        *  如果我偷这一家，则相邻的第i-1家就不能偷，那么最大值就是第 i-2家加上我当前偷得这一家
        *  如果我不偷这一家，则当前最大值即为第 i-1家的最大值，然后我可以再去下一家看看
            
            状态转移方程：    res =  max(rob(i-2)+currentValue,rob(i-1));
     */
    int rob(vector<int> &nums){
        // 方法1： 递归暴力解法
//        int len = (int)nums.size();
//        if (len <= 0) return 0;
//        return rob_recu(nums, len-1);
        
        
        // 方法2： 动态规划
        int len = (int)nums.size();
        if (len <= 0) return 0;
        if (len == 1) return nums[0];
        vector<int> dp(len+1,0);
        dp[1] = nums[0];
        for (int i = 2; i <= len; i++) {
            dp[i] = max(dp[i-2]+nums[i-1],dp[i-1]);
        }
        return dp[len];
        
//        int len = nums.size();
//        if(len == 0) return 0;
//        if(len == 1) return nums[0];
//        vector<int> dp(len+1,0);
//        dp[1] = nums[0];
//        for(int i = 2; i <= len;i++)
//            dp[i] = max(dp[i-1], dp[i-2]+nums[i-1]);
//        return dp[len];
    }
    
    int rob_recu(vector<int> &nums,int index){
        if (index == 0) return nums[0];
        if (index == 1) return max(nums[0],nums[1]);
        int res = nums[0];
        for (int i = 2; i <= index; i++)
            res = max(rob_recu(nums,i-2)+nums[i],rob_recu(nums, i-1));
        return res;
    }
};

#endif /* lc_198_hpp */
