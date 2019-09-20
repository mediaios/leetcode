//
//  lc_20.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/20.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_20_hpp
#define lc_20_hpp
#include <string.h>
#include <stack>

#include <stdio.h>

class Solution20{
public:
    bool isValid(string s){
        stack<char> sStack;
        int i = 0;
        while (s[i] != '\0') {
            switch (s[i]) {
                case '(':
                case '{':
                case '[':
                {
                    sStack.push(s[i]);
                    i++;
                }
                    break;
                case ')':
                {
                    if (!sStack.empty() && sStack.top() == '(') {
                        sStack.pop();
                        i++;
                    }else{
                        return false;
                    }
                }
                    break;
                case '}':
                {
                    if (!sStack.empty() && sStack.top() == '{') {
                        sStack.pop();
                        i++;
                    }else{
                        return false;
                    }
                }
                    break;
                case ']':
                {
                    if (!sStack.empty() && sStack.top() == '[') {
                        sStack.pop();
                        i++;
                    }else{
                        return false;
                    }
                }
                    break;
                    
                default:
                    break;
            }
        }
        
        return sStack.empty();
    }
    
};


#endif /* lc_20_hpp */
