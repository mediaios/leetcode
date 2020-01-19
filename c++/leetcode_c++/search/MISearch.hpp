//
//  MISearch.hpp
//  leetcode_c++
//
//  Created by ethan on 2020/1/15.
//  Copyright © 2020 ucloud. All rights reserved.
//

#ifndef MISearch_hpp
#define MISearch_hpp

#include <stdio.h>

int binarySearch(int a[],int begin,int end,int target){
    if(begin > end) return -1;
    int mid = (begin+end)/2;
    if(target == a[mid]) return mid;
    if(target < a[mid]) return binarySearch(a,begin,mid-1,target);
    if(target > a[mid]) return binarySearch(a,mid+1,end,target);
    return -1;
}

int binarySearch2(int a[],int len,int target)
{
    int begin = 0,end = len;
    int mid = 0;
    while(begin < end){
        mid = (begin+end)/2;
        if(target == a[mid]) return mid;
        if(target < a[mid]) end = mid;
        if(target > a[mid]) begin = mid+1;
    }
    return -1;
}

void miPrintArray(int a[],int len){
    for (int i = 0; i < len; ++i)
    {
        printf(" %i ",a[i]);
    }
    printf("\n");
}

void quickSortImp(int a[],int begin,int end)
{
    if(begin < end){
        int i = begin, j = end;
        int vot = a[i];
        while(i != j){
            while(i < j && vot < a[j])
                j--;
            if(i < j)
                a[i++] = a[j];
            while(i < j && vot > a[i])
                i++;
            if(i < j)
                a[j--] = a[i];
        }
        a[i] = vot;
        quickSortImp(a,begin,j-1);
        quickSortImp(a,i+1,end);
    }
}

void miQuickSort(int a[],int len)
{
    quickSortImp(a,0,len-1);
    miPrintArray(a,len);
}

// 1-99相加
int sum0to99(int num)
{
    if(num == 1) return 1;
    else return sum0to99(num-1)+num;
}

void testSearch()
{
    int a[] = {-12,34,0,15,67,2,100,9,45,33};
    miQuickSort(a,10);
    int index = binarySearch(a,0,9,100);
    printf("二分查找1： %d\n",index);
    
    int index2 = binarySearch2(a,10,100);
    printf("二分查找2： %d\n",index2);
    
    
    long sum = sum0to99(99);
    printf("%ld\n",sum);
}



#endif /* MISearch_hpp */
