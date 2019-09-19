//
//  main.cpp
//  leetcode_c++
//
//  Created by ethan on 2019/9/19.
//  Copyright © 2019 ucloud. All rights reserved.
//

#include <iostream>
#include "lc_01.hpp"
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
    
    vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution01 *s01 = new Solution01();
    vector<int> res01 = s01->twoSum(nums, target);
    
    printVector(res01);
    
    return 0;
}
