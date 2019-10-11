////
////  lc_21.hpp
////  leetcode_c++
////
////  Created by mediaios on 2019/9/25.
////  Copyright © 2019 mediaios. All rights reserved.
////
//
//#ifndef lc_21_hpp
//#define lc_21_hpp
//
//#include <stdio.h>
//
////struct ListNode{
////    int val;
////    ListNode *next;
////    ListNode(int x) :val(x),next(NULL){}
////};
//
//class Solution21
//{
//public:
//    /*
//     输入：1->2->4, 1->3->4
//     输出：1->1->2->3->4->4
//     */
//    ListNode* mergeTwoLists(ListNode* l1, ListNode *l2){
//        if (l1 == NULL) return l2;
//        if (l2 == NULL) return l1;
//
//        if (l1->val < l2->val) {
//            l1->next = mergeTwoLists(l1->next, l2);
//            return l1;
//        }
//        else{
//            l2->next = mergeTwoLists(l2->next, l1);
//            return l2;
//        }
//    }
//
//    // t: 12ms   m: 9M
//    ListNode * mergeTwoList2(ListNode *l1, ListNode *l2){
//        ListNode *prehead = new ListNode(-1);
//        ListNode *prev = prehead;
//        while (l1 != NULL && l2 != NULL) {
//            if (l1->val <= l2->val) {
//                prev->next = l1;
//                l1 = l1->next;
//            }else{
//                prev->next = l2;
//                l2 = l2->next;
//            }
//            prev = prev->next;
//        }
//
//        prev->next = l1 != NULL ? l1 : l2;
//
//        return prehead->next;
//    }
//};
//
//#endif /* lc_21_hpp */
