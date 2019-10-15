//
//  lc_322.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/10/15.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_322_hpp
#define lc_322_hpp

#include <stdio.h>

class Solution322
{
public:
    int coinChange(vector<int>& coins,int amount){
//        // 递归暴力解法
//        if (amount <= 0) return 0;
//        int ans = INT_MAX;
//        for (int coin : coins) {
//            // 金额不可达
//            if(amount - coin < 0) continue;
//            int subProb = coinChange(coins,amount-coin);
//
//            // 子问题无解
//            if (subProb == -1) continue;
//            ans = min(ans,subProb+1);
//        }
//        return ans == INT_MAX ? -1 : ans;
        
//        // 方法二：带备忘录的递归算法
//        vector<int> memo(amount+1,-2);
//        return coin_change(coins,amount,memo);
        
        
        // 动态规划
        vector<int> dp(amount+1,amount+1);
        dp[0] = 0;
        for(int i = 0; i < dp.size(); i++){
            for (int coin : coins) {
                if(i - coin < 0) continue;
                dp[i] = min(dp[i],1+dp[i-coin]);
            }
        }
        return (dp[amount] == amount + 1) ? -1: dp[amount];
    }
    
    int coin_change(vector<int> &coins,int amount,vector<int>& memo){
        if (amount <= 0) return 0;
        if (memo[amount] != -2) return memo[amount];
        int ans = INT_MAX;
        for (int coin : coins) {
            if (amount - coin < 0) continue;
            int subPron = coin_change(coins, amount - coin, memo);
            if (subPron == -1) continue;
            ans = min(ans,subPron+1);
        }
        memo[amount] = (ans == INT_MAX) ? -1 : ans;
        return memo[amount];
    }
};

#endif /* lc_322_hpp */
