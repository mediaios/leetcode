//
//  lc_509.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/10/15.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_509_hpp
#define lc_509_hpp

#include <stdio.h>

public class Solution509
{
public:
    int fib(int N){
        // 方法1： 利用递归
        // if (N == 0) return 0;
        // if (N == 1) return 1;
        // return fib(N-1)+fib(N-2);
        
        // 方法2：备忘录算法
        // if (N < 0) return 0;
        // vector<int> res(N+1,0);
        // return fib_calc(res,N);
        
        // 方法3：动态规划
        if (N <= 0) return 0;
        if (N == 1) return 1;
        int first  = 0;
        int second = 1;
        for (int i = 2;i <= N; i++){
            int third = first + second;
            first  = second;
            second = third;
        }
         return second;
    }
    
    int fib_calc(vector<int> &res,int N){
        if (N == 0) return 0;
        if (N == 1) return 1;
        if (res[N] != 0) return res[N];
        res[N] = fib_calc(res,N-1) + fib_calc(res,N-2);
        return res[N];
    }
};

#endif /* lc_509_hpp */
