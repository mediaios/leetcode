//
//  lc_88.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/23.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_88_hpp
#define lc_88_hpp

#include <stdio.h>
#include <vector>

class Solution88{
public:
    
    /*
     输入:
     nums1 = [1,2,3,0,0,0], m = 3
     nums2 = [2,5,6],       n = 3

     输出: [1,2,2,3,5,6]
     
     方法1：创建一个新数组，使用双指针，将指向数值小的压入新的数组，同时指针向前移动一位
     
     t: 4ms   m： 8.8M
     */
    void merge01(vector<int> &nums1,int m, vector<int> &nums2,int n)
    {
        if (n == 0) return;
        vector<int> res;
        int *p1 = &nums1[0];
        int *p2 = &nums2[0];
        int k = 0,j = 0;
       
        while (k < m && j < n) {
            if (*p1 <= *p2) {
                res.push_back(*p1);
                p1++;
                k++;
            }
            else if(*p1 > *p2){
                res.push_back(*p2);
                p2++;
                j++;
            }
        }
        
        if (j == n) {
            while (k < m) {
                res.push_back(*p1);
                p1++;
                k++;
            }
        }
        
        if ( k == m) {
            while (j < n) {
                res.push_back(*p2);
                p2++;
                j++;
            }
        }
        
        for (int i = 0; i < res.size(); i++) {
            nums1[i] = res[i];
        }
    }
    
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // 假设是升序的
        this->merge01(nums1, m, nums2, n);
        
    }
};


#endif /* lc_88_hpp */
