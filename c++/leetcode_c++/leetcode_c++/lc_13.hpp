//
//  lc_13.hpp
//  leetcode_c++
//
//  Created by ethan on 2019/9/20.
//  Copyright © 2019 ucloud. All rights reserved.
//

#ifndef lc_13_hpp
#define lc_13_hpp

#include <stdio.h>
#include <string.h>

class Solution13{
public:
    
    // 方法1： 直接转换，只需要判断小符号在大符号前面的复杂情况。 t: 20ms   memory: 8.4M
    int romanToIn01(string s){
        int num = 0;
        int s_len = (int)s.length();
        for (int i = 0; i < s_len; i++) {
            switch (s[i]) {
                case 'V':
                    num += 5;
                    break;
                case 'L':
                    num += 50;
                    break;
                case 'D':
                    num += 500;
                    break;
                case 'M':
                    num += 1000;
                    break;
                case 'I':
                {
                    if (i+1 < s_len && s[i+1] == 'V') {
                        num += 4;
                        i++;
                    }
                    else if(i+1 < s_len && s[i+1] == 'X'){
                        num += 9;
                        i++;
                    }
                    else{
                        num += 1;
                    }
                        
                }
                    break;
                case 'X':
                {
                    if (i+1 < s_len && s[i+1] == 'L') {
                        num += 40;
                        i++;
                    }
                    else if (i+1 < s_len && s[i+1] == 'C') {
                        num += 90;
                        i++;
                    }
                    else{
                        num += 10;
                    }
                }
                    break;
                case 'C':
                {
                    if (i+1 < s_len && s[i+1] == 'D') {
                        num += 400;
                        i++;
                    }
                    else if (i+1 < s_len && s[i+1] == 'M') {
                        num += 900;
                        i++;
                    }
                    else{
                        num += 100;
                    }
                }
                    break;
                
                    
                default:
                    break;
            }
        }
        return num;
    }
    
    // 方法2：建立一个哈希表，然后一一判断，若前面的罗马数值比后面的罗马数值小，则将结果加上两者的正差值，若前面的罗马数值比后面的罗马数值大，则直接加上该罗马的对应数值。 t: 20ms  m:11.1M
    int romanToInt(string s){
        int result=0;//存放结果
        map<char,int> luomab;//建立罗马表
        //插入对应关系
        luomab.insert(map<char,int>::value_type('I',1));
        luomab.insert(map<char,int>::value_type('V',5));
        luomab.insert(map<char,int>::value_type('X',10));
        luomab.insert(map<char,int>::value_type('L',50));
        luomab.insert(map<char,int>::value_type('C',100));
        luomab.insert(map<char,int>::value_type('D',500));
        luomab.insert(map<char,int>::value_type('M',1000));
        for(int i=0;i<s.length();i++)
        {
            if(luomab[s[i]]>=luomab[s[i+1]])
                result+=luomab[s[i]];
            else
            {
                result+=(luomab[s[i+1]]-luomab[s[i]]);
                i++;
            }
        }
        return result;
    }
};

#endif /* lc_13_hpp */
