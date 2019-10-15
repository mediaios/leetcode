//
//  lc_70.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/10/11.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_70_hpp
#define lc_70_hpp

#include <stdio.h>
#include <map>

class Solution70{
public:
    /**
            假设你正在爬楼梯。需要 n 阶你才能到达楼顶。

            每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

            注意：给定 n 是一个正整数。

            示例 1：

            输入： 2
            输出： 2
            解释： 有两种方法可以爬到楼顶。
            1.  1 阶 + 1 阶
            2.  2 阶
            示例 2：

            输入： 3
            输出： 3
            解释： 有三种方法可以爬到楼顶。
            1.  1 阶 + 1 阶 + 1 阶
            2.  1 阶 + 2 阶
            3.  2 阶 + 1 阶
     */
    
    int climb_stairs(int i,int n,vector<int> &demo){
        if(i > n) return 0;
        if(i == n) return 1;
        if (demo[i] > 0) return demo[i];
        demo[i] = climb_stairs(i+1, n, demo)+climb_stairs(i+2, n, demo);
        return demo[i];
    }
    
    int climbStairs(int n){
        // 递归的方式
//        if (n == 1) return 1;
//        if (n == 2) return 2;
//        return climbStairs(n-1)+climbStairs(n-2);
        
//        // 备忘录算法
//        vector<int> demo(n+1,-1);
//        return climb_stairs(0, n, demo);
        
        
        if(n == 1) return 1;
        int first  = 1;
        int second = 2;
        for (int i = 3; i <= n; i++) {
            int third = first + second;
            first = second;
            second = third;
        }
        return second;
        
        
//        // 动态规划
//        if(n == 1) return 1;
//        int first = 1,second = 2;
//        for (int i = 3; i <= n; i++) {
//            int third = first+second;
//            first = second;
//            second = third;
//        }
//        return second;
    }
};

#endif /* lc_70_hpp */
