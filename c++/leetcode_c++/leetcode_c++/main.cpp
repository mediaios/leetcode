//
//  main.cpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/19.
//  Copyright © 2019 mediaios. All rights reserved.
//

#include <iostream>
#include "lc_01.hpp"
#include "lc_07.hpp"
#include "lc_09.hpp"
#include "lc_13.hpp"
#include "lc_14.hpp"
#include "lc_20.hpp"
#include "lc_21.hpp"
#include "lc_26.hpp"
#include "lc_27.hpp"
#include "lc_38.hpp"
#include "lc_58.hpp"
#include "lc_66.hpp"
#include "lc_67.hpp"
#include "lc_69.hpp"
#include "lc_88.hpp"
#include <vector>

void printVector(vector<int> &array)
{
    for (int i = 0; i < array.size(); i++) {
        cout<<array[i];
        if (i < array.size() -1) {
            cout<<" , ";
        }else{
            cout<<endl;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    
//    vector<int> nums = {2,7,11,15};
//    int target = 9;
//    Solution01 *s01 = new Solution01();
//    vector<int> res01 = s01->twoSum(nums, target);
//    printVector(res01);
    
//    Solution07 *s07 = new Solution07();
//    cout<<s07->revertNum(123)<<endl;
    
//    Solution09 *s09 = new Solution09();
//    s09->isPalindrome(121) ? cout<<"121: true\n" : cout<<"121: false\n";
//    s09->isPalindrome(-121) ? cout<<"-121: true\n" : cout<<"-121: false\n";
//    s09->isPalindrome(10) ? cout<<"10: true\n" : cout<<"10: false\n";
//    s09->isPalindrome(0) ? cout<<"0: true\n" : cout<<"0: false\n";
//    s09->isPalindrome(9) ? cout<<"9: true\n" : cout<<"9: false\n";
    
    
//    Solution13 *s13 = new Solution13();
//    cout<<"III: "<<s13->romanToInt("III")<<endl;
//    cout<<"IV: "<<s13->romanToInt("IV")<<endl;
//    cout<<"IX: "<<s13->romanToInt("IX")<<endl;
//    cout<<"LVIII: "<<s13->romanToInt("LVIII")<<endl;
//    cout<<"MCMXCIV: "<<s13->romanToInt("MCMXCIV")<<endl;
//    cout<<"MCM: "<<s13->romanToInt("MCM")<<endl;
    
//    vector<string> v1 = {"flower","flow","flight"};
//    Solution14 *s14 = new Solution14();
//    cout<<s14->longestCommonPrefix(v1)<<endl;
    
//    Solution20 *s20 = new Solution20();
//    s20->isValid("()") ? cout<<"(): true\n" : cout<<"(): false \n";
//    s20->isValid("()[]{}") ? cout<<"()[]{}: true\n" : cout<<"()[]{}: false \n";
//    s20->isValid("(]") ? cout<<"(]: true\n" : cout<<"(]: false \n";
//    s20->isValid("([)]") ? cout<<"([)]: true\n" : cout<<"([)]: false \n";
//    s20->isValid("{[]}") ? cout<<"{[]}: true\n" : cout<<"{[]}: false \n";
    
    
//    Solution26 *s26 = new Solution26();
//    vector<int> nums = {1,1,1,2,2,3,3,4};
//    cout<<"{1,1,1,2,2,3,3,4} remove duplicates:"<<s26->removeDuplicates(nums)<<endl;
    
    
//    Solution27 *s27 = new Solution27();
//    vector<int> nums = {1,1,1,2,2,3,3,4};
//    cout<<"{1,1,1,2,2,3,3,4} remove duplicates:"<<s27->removeElement(nums,3)<<endl;
    
    
    
//    Solution38 *s38 = new Solution38();
//    cout<<s38->countAndSay(30)<<endl;
    
//    Solution58 *s58 = new Solution58();
//    cout<<"Hello World: "<<s58->lengthOfLastWord("Hello World")<<endl;
//    cout<<"a : "<<s58->lengthOfLastWord("a ")<<endl;
//    cout<<"a a : "<<s58->lengthOfLastWord("a a ")<<endl;
    
//    vector<int> v1 = {9,9,9,9};
//    Solution66 *s66 = new Solution66();
//    s66->plusOne(v1);
//    for (int i = 0; i < v1.size(); i++) {
//        cout<<v1[i]<<" ";
//    }
//    cout<<endl;
    
//    Solution67 *s67 = new Solution67();
//    cout<<"11,1: ----> "<<s67->addBinary("11", "1")<<endl;
//    cout<<"1010,1011: ----> "<<s67->addBinary("1010", "1011")<<endl;
//    cout<<"1111,1111: ----> "<<s67->addBinary("1111", "1111")<<endl;
    
    
    Solution69 *s69 = new Solution69();
    cout<<"0: "<<s69->mySqrt(0)<<endl;
    cout<<"4: "<<s69->mySqrt(4)<<endl;
    cout<<"8: "<<s69->mySqrt(8)<<endl;
    cout<<"2147395600: "<<s69->mySqrt(2147395600)<<endl;
    cout<<"2147395599: "<<s69->mySqrt(2147395599)<<endl;
    
    
    
    /*
    nums1 = [1,2,3,0,0,0], m = 3
    nums2 = [2,5,6],       n = 3

    输出: [1,2,2,3,5,6]
     */
//    Solution88 *s88 = new Solution88();
//
//    vector<int> nums1 = {1,2,3,0,0,0};
//    vector<int> nums2 = {2,5,6};
//    s88->merge(nums1, 3, nums2, 3);
    
//    vector<int> nums1 = {2,0};
//    vector<int> nums2 = {1};
//    s88->merge(nums1, 1, nums2, 1);
//    for (int i = 0; i < nums1.size(); i++) {
//        cout<<nums1[i]<<" ";
//    }
//    cout<<endl;
    return 0;
}
