//
//  lc_21.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/25.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_21_hpp
#define lc_21_hpp

#include <stdio.h>

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) :val(x),next(NULL){}
};

class Solution21
{
public:
    /*
     输入：1->2->4, 1->3->4
     输出：1->1->2->3->4->4
     */
    ListNode* mergeTowLists(ListNode* l1, ListNode *l2){
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        
        return NULL;
    }
};

#endif /* lc_21_hpp */
