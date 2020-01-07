//
//  MISort1.hpp
//  leetcode_c++
//
//  Created by mediaios on 2020/1/7.
//  Copyright © 2020 mediaios. All rights reserved.
//

#ifndef MISort1_hpp
#define MISort1_hpp

#include <stdio.h>


/**
 辅助方法
 */

void printArray(int a[],int len){
    for (int i = 0; i < len; i++) {
        printf(" %d ",a[i]);
    }
    printf("\n");
}

void swap(int a[],int loc1,int loc2){
    int temp = a[loc1];
    a[loc1] = a[loc2];
    a[loc2] = temp;
}

/**
 排序算法
 */

/// 冒泡
void bubleSort(int a[],int len){
    int exchange = 1;
    for (int i = 1; i < len && exchange == 1; i++) {   // 有交换时才进行下一趟排序
        exchange = 0;  // 假定元素没有交换
        for (int j = 0; j < len - i; j++) {
            if (a[j] > a[j+1]) {
                swap(a, j, j+1);
                exchange = 1;
            }
        }
    }
    printArray(a, len);
}

// 直接选择排序： 第一趟从n个元素的数据中选出关键字最小或最大的元素放到最前或最后位置，下一趟再从n-1个元素……
void selectSort(int a[],int len){
    for (int i = 0; i < len; i++) {  // n-1趟扫描
        
        int min = i;
        for (int j = i+1; j < len; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        
        if (min != i) {
            swap(a, i, min);
        }
    }
    printArray(a, len);
}

/// 直接插入 ： 从序列中选择一个元素，把它插入到前面已经排好的序列中去
void insertSort(int a[],int len){
//    int a[] = {2,-7,-11,15,0,43,10,99};
    
    for (int i = 1; i < len; i++) { // n-1趟扫描
       
        int temp = a[i], j;
        for (j = i-1; temp < a[j] &&  j >= 0; j--) {
            a[j+1] = a[j];
        }
        a[j+1] = temp;
    }
    printf("insertSort:\n");
    printArray(a, len);
}

/// 希尔排序
void shellSort(int a[],int len){
    
    for(int delta = len/2; delta > 0; delta /= 2){
        
        for (int i = delta; i < len; i++) {
            
            int temp = a[i],j;
            for (j = i - delta; temp < a[j] && j >= 0; j -= delta) {
                a[j+delta] = a[j];
            }
            a[j+delta] = temp;
        }
    }
    printArray(a, len);
    
}


void quickSortImp(int a[],int begin,int end){
    if (begin < end) {
        int i = begin,j = end;
        int vot = a[i];
        while (i != j) {
            
            while (i < j && vot < a[j]) // 移动基准值后面的游标
                j--;
            
            if (i < j)    // 当基准值右侧有小元素时
                a[i++] = a[j];  // 将小元素方到基准值前面
            
            
            while (i < j && vot > a[i])
                i++;
            if (i < j)
                a[j--] = a[i];
        }
        a[i] = vot;
        quickSortImp(a, begin, j-1);
        quickSortImp(a, i+1, end);
    }
}

void quickSort(int a[],int len){
    quickSortImp(a, 0, len-1);
    printArray(a, len);
}


#endif /* MISort1_hpp */
