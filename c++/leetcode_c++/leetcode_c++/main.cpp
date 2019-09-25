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
#include "lc_20.hpp"
#include "lc_26.hpp"
#include "lc_27.hpp"
#include "lc_38.hpp"
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
    
    
    
    Solution38 *s38 = new Solution38();
    cout<<s38->countAndSay(30)<<endl;
    
    
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
