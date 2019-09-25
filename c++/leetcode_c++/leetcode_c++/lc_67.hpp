//
//  lc_67.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/25.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef lc_67_hpp
#define lc_67_hpp

#include <stdio.h>
#include <string.h>
class Solution67{
public:
    
    string addBinary01(string a,string b)
    {
         string res = "";
                int alen = (int)a.length();
                int blen = (int)b.length();
                int temp = 0;
        //
        //        cout<<"alen: "<<alen<<endl;
        //        cout<<"blen: "<<blen<<endl;
        //        int p = a[alen-1]-'0';
        //        int q = b[blen-1]-'0';
        //        cout<<"p:"<<p<<endl;
        //        cout<<"q:"<<q<<endl;
                
                if (alen >= blen) {
                    while (blen > 0) {
                        int m = (a[alen-1]-'0')+(b[blen-1] -'0') + temp;
        //                cout<<"m: "<<m<<endl;
                        if (m >= 2) {
                            res.push_back(0+'0');
                            temp = 1;
                        }else{
                            res.push_back(m+'0');
                            temp = 0;
                        }
                        blen--;
                        alen--;
                    }
        //            cout<<"alen: "<<alen<<endl;
        //            cout<<"blen: "<<blen<<endl;
                    while(alen > 0) {
                        int m = (a[alen-1]-'0')+temp;
                        if (m >= 2) {
                            res.push_back(0+'0');
                            temp = 1;
                        }else{
                            res.push_back(m+'0');
                        }
                        alen--;
                    }
                    
                }else{
                    while (alen > 0) {
                        int m = (a[alen-1]-'0')+(b[blen-1] -'0') + temp;
            //          cout<<"m: "<<m<<endl;
                        if (m >= 2) {
                            res.push_back(0+'0');
                            temp = 1;
                        }else{
                            res.push_back(m+'0');
                            temp = 0;
                        }
                        blen--;
                        alen--;
                    }
                    
                    while(blen > 0) {
                       int m = (b[blen-1]-'0')+temp;
                       if (m >= 2) {
                           res.push_back(0+'0');
                           temp = 1;
                       }else{
                           res.push_back(m+'0');
                       }
                       alen--;
                    }
                    
                }
                
                if (temp  == 1) {
                   res.push_back(1+'0');
                }
                
                for (int i =0; i < res.length()/2; i++) {
                    char c_temp = res[i];
                    res[i] = res[res.length()-1-i];
                    res[res.length()-1-i] = c_temp;
                }
                return res;
    }
    
    string addBinary02(string a,string b){
        int alen = (int)a.length();
        int blen = (int)b.length();
        int temp = 0;
        
        if (alen >= blen) {
            while (blen > 0) {
                int m = (a[alen-1]-'0')+(b[blen-1] -'0') + temp;
                if (m >= 2) {
                    a[alen-1] = 0+'0';
                    temp = 1;
                }else{
                    a[alen-1] = m+'0';
                    temp = 0;
                }
                blen--;
                alen--;
            }
            while(alen > 0) {
                int m = (a[alen-1]-'0')+temp;
                if (m >= 2) {
                    a[alen-1] = 0+'0';
                    temp = 1;
                }else{
                    a[alen-1] = m+'0';
                }
                alen--;
            }
            
        }else{
            while (alen > 0) {
                int m = (a[alen-1]-'0')+(b[blen-1] -'0') + temp;
                if (m >= 2) {
                    b[blen -1] = 0+'0';
                    temp = 1;
                }else{
                    b[blen -1] = m+'0';
                    temp = 0;
                }
                blen--;
                alen--;
            }
            
            while(blen > 0) {
               int m = (b[blen-1]-'0')+temp;
               if (m >= 2) {
                   b[blen -1] = 0+'0';
                   temp = 1;
               }else{
                   b[blen -1] = m+'0';
               }
               alen--;
            }
            
        }
        
        if (temp  == 1) {
            alen >= blen ? a = "1"+a : b = "1"+b;
        }
        cout<<"a:"<<a<<endl;
        
        return alen >= blen ? a : b;
    }
    
    /*
     a = "11"
     b = "1"
     res = "100"
     
     t: 8ms   m: 8.8M
     */
    string addBinary(string a,string b)
    {
        int alen = (int)a.length();
        int blen = (int)b.length();
        int temp = 0;
        while (alen < blen) {
            a = '0' + a;
            alen++;
        }
        
        while (alen > blen) {
            b = '0' + b;
            blen++;
        }
        
        while (blen > 0) {
            int m = (a[alen-1]-'0')+(b[blen-1] -'0') + temp;
            if (m >= 2) {
                a[alen-1] = m%2+'0';
                temp = 1;
            }else{
                a[alen-1] = m+'0';
                temp = 0;
            }
            blen--;
            alen--;
        }
        
        if (temp) {
            a = "1"+a;
        }
        return a;
    }
};
#endif /* lc_67_hpp */
