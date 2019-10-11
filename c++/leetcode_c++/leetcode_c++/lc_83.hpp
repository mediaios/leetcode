//
//  lc_83.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/10/11.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_83_hpp
#define lc_83_hpp

#include <stdio.h>

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x) :val(x),next(NULL){}
};

class Solution83{
public:
    /**
        给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。

        示例 1:

        输入: 1->1->2
        输出: 1->2
        示例 2:

        输入: 1->1->2->3->3
        输出: 1->2->3
     */
    
    // t: 12ms    m: 9.6M
    ListNode *deleteDuplicates(ListNode *head){
        if (head == NULL || head->next == NULL) return head;
        
        ListNode *prehead = new ListNode(-1);  // 用于存放结果
        ListNode *prev = prehead;
        ListNode *p = head;
        
        if(p->val == -1) {
            prev->next = new ListNode(-1);
            p = p->next;
            prev = prev->next;
        }
            
        while (p != NULL) {
            if (prev->val == p->val){
                p = p->next;
            }else{
                prev->next = new ListNode(p->val);
                p = p->next;
                prev = prev->next;
            }
        }
        
        return prehead->next;
    }
    
};

#endif /* lc_83_hpp */
