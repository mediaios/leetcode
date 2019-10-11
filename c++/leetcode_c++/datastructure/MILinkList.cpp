//
//  MILinkList.cpp
//  leetcode_c++
//
//  Created by mediaios on 2019/9/26.
//  Copyright © 2019 mediaios. All rights reserved.
//

#include "MILinkList.hpp"
#include <iostream>

MILinkList::~MILinkList()
{
    MINode *p = head;
    while (head) {
        p = head;
        head = head->next;
        delete p;
    }
}

bool MILinkList::insert(int data,int index)
{
    MINode *p = head;
    MINode *s = head;
    if (index  == 0) {
        s = (MINode *)malloc(sizeof(MINode));
        s->data = data;
        s->next = p;
        head = s;
        return true;
    }
    int loc = 0;
    for (; loc < index-1; loc++) {
        p = p->next;
    }
    if (p == nullptr) {
        return false;
    }
    
    s = (MINode *)malloc(sizeof(MINode));
    s->data = data;
    s->next = p->next;
    p->next = s;
    return true;
}

int MILinkList::length()
{
    MINode *p = head;
    int len = 0;
    while (p != nullptr) {
        len++;
        p = p->next;
    }
    return len;
}


/// 获取指定位置的元素
bool MILinkList::getElem(int index,int *element)
{
    MINode *p = head;
    int j = 0;
    while (p&&j < index) {
        p = p->next;
        j++;
    }
    if (p == NULL) return false;
    *element = p->data;
    return true;
}

int MILinkList::locateElem(int e)
{
    int i = 0;
    MINode *p = head;
    while (p!= NULL) {
        if (p->data == e) return i;
        else p = p->next;
        i++;
    }
    std::cout<<"表中不存在指定元素"<<std::endl;
    exit(1);
}

void MILinkList::deleteNode(int index)
{
     MINode *p = head, *s;
        if (p == NULL) return;
        int j = 0;
        if (index == 0)
        {
            head = head->next;
            delete p;
            p = NULL;
            return ;
        }
        while (p&&j < index - 1)
        {
            j++;
            p = p->next;
        }
        if (p == NULL)
            return;
        s = p->next;
        p->next = p->next->next;
        delete s;
        s = NULL;
}

void MILinkList::printList()
{
    int a = 0;
    int *p = &a;
    int len = this->length();
    for (int i = 0; i < len; i++) {
        if (this->getElem(i, p)) {
            std::cout<<*p<<" ";
        }
    }
    std::cout<<std::endl;
}
