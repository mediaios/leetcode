//
//  MILinkList.hpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/26.
//  Copyright © 2019 mediaios. All rights reserved.
//

#ifndef MILinkList_hpp
#define MILinkList_hpp

#include <stdio.h>


typedef struct MINode{
    int data;
    struct MINode *next;
}MINode;

class MILinkList
{
public:
    MILinkList(){head = nullptr;}
    ~MILinkList();
    bool clearList();
    bool isEmpty(){return head == nullptr;}
    int length();
    bool getElem(int index,int *element);
    int locateElem(int e);
    bool insert(int data,int index);
    void deleteNode(int index);
    void printList();
//    void exchange(int index1,int index2);
    
private:
    MINode *head;
    
};


#endif /* MILinkList_hpp */
