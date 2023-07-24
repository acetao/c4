/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              习题10-11.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
/* 有序表的增删改查操作 */
#include <stdio.h>
#define MAXN 10000 /* 定义符号常量表示数组a的长度 */

int Count = 0; /* 用全局变量Count表示数组a中待处理的元素个数 */
void select(int a[], int option,
            int value); /* 决定对有序数组a进行何种操作的控制函数 */
int input_array(int a[]);  /* 输入有序数组a的函数 */
void print_array(int a[]); /* 输出有序数组a的函数 */
int insert(int a[], int value); /* 在有序数组a中插入一个值为value的元素的函数 */
int del(int a[], int value); /* 删除有序数组a中等于value的元素的函数 */
int modify(int a[], int value1,
           int value2); /* 将有序数组a中等于value1的元素，替换为value2 */
int query(int a[], int value); /* 用二分法在有序数组a中查找元素value的函数 */

int main(void) {
  int option, value, a[MAXN];

  if (input_array(a) == -1) { /* 调用函数输入有序数组 a */
    printf("Error"); /* a不是有序数组，则输出相应的信息 */
    return 0;
  }

  printf("[1] Insert\n"); /* 以下4行显示菜单*/
  printf("[2] Delete\n");
  printf("[3] Update\n");
  printf("[4] Query\n");
  printf("[Other option] End\n");
  while (1) {             /* 循环 */
    scanf("%d", &option); /* 接受用户输入的编号 */
    if (option < 1 || option > 4) { /* 如果输入1、2、3、4以外的编号，结束循环 */
      break;
    }
    scanf("%d", &value);      /* 接受用户输入的参数value */
    select(a, option, value); /* 调用控制函数 */
    printf("\n");
  }
  printf("Thanks."); /* 结束操作 */

  return 0;
}

/* 控制函数 */
void select(int a[], int option, int value) {
  int index, value2;

  switch (option) {
  case 1:
    index = insert(a, value); /* 调用插入函数在有序数组 a 中插入元素value */
    if (index == -1) { /* 插入数据已存在，则输出相应的信息 */
      printf("Error");
    } else {
      print_array(a); /* 调用输出函数，输出插入后的有序数组a */
    }
    break;
  case 2:
    index = del(a, value); /* 调用删除函数在有序数组 a 中删除元素value */
    if (index == -1) { /* 没找到value，则输出相应的信息 */
      printf("Deletion failed.");
    } else {
      print_array(a); /* 调用输出函数，输出删除后的有序数组a */
    }
    break;
  case 3:
    scanf("%d", &value2); /* 接受用户输入的参数value2 */
    index = modify(
              a, value,
              value2); /* 调用修改函数在有序数组 a 中修改元素value的值为value2 */
    if (index == -1) { /* 没找到value或者vaule2已存在，则输出相应的信息 */
      printf("Update failed.");
    } else {
      print_array(a); /* 调用输出函数，输出修改后的有序数组a */
    }
    break;
  case 4:
    index = query(a, value); /* 调用查询函数在有序数组 a 中查找元素value */
    if (index == -1) { /* 没找到value，则输出相应的信息 */
      printf("Not found.");
    } else { /* 找到，则输出对应的下标 */
      printf("%d", index);
    }
    break;
  }
}

/* 有序表输入函数 */
int input_array(int a[]) {
  scanf("%d", &Count);
  for (int i = 0; i < Count; i++) {
    scanf("%d", &a[i]);
    if (i > 0 && a[i] <= a[i - 1]) { /* a不是有序数组 */
      return -1;
    }
  }

  return 0;
}

/* 有序表输出函数 */
void print_array(int a[]) {
  for (int i = 0; i < Count;
       i++) { /* 输出时相邻数字间用一个空格分开，行末无空格 */
    if (i == 0) {
      printf("%d", a[i]);
    } else {
      printf(" %d", a[i]);
    }
  }
}

/* 请在这里填写答案 */
int insert(int a[], int value) /* 在有序数组a中插入一个值为value的元素的函数 */
{
  int i, j;
  i = query(a, value); //查询value
  if (i != -1)
    return -1;
  //使用顺序查找搜索value的插入位置
  i = 0;
  while (a[i] < value)
    i++;
  // value应该插入在i的位置：i开始的元素逐一后移一位
  for (j = Count - 1; j >= i; j--) {
    a[j + 1] = a[j]; // j位置的元素后移到位置j+1
  }
  //在位置i插入元素value
  a[i] = value;
  Count++;  //元素个数增加1
  return 0; //插入成功
}
int del(int a[], int value) /* 删除有序数组a中等于value的元素的函数 */
{
  int i, j;
  i = query(a, value);
  if (i == -1)
    return -1;
  //找到value，其位置为i：从i+1开始的元素，依次前移一个位置
  for (j = i + 1; j < Count; j++) {
    a[j - 1] = a[j]; //位置j的元素前移到位置j-1
  }
  Count--;  //元素个数减少1
  return 0; //删除成功
}
int modify(int a[], int value1,
           int value2) /* 将有序数组a中等于value1的元素，替换为value2 */
{
  int i, j;
  i = query(a, value1);
  j = query(a, value2);
  // i==-1,不存在value1；j!=-1,存在value2的元素
  if (i == -1 || j != -1)
    return -1;
  //将位置i的元素value1替换为value2
  a[i] = value2;
  //特别注意：更新后应保证数组仍然有序
  //将更新后的元素value2与位置i-1、位置i+1进行比较：
  //如果比i-1位置元素小，往前移动；如果比i+1位置的元素大，往后移动
  if (a[i] < a[i - 1]) { //比i-1位置元素小，a[i]往前移动
    int tmp = a[i];     //暂存a[i]
    j = i - 1;          //从i的前一个位置开始往前搜索
    while (j >= 0 && tmp < a[j]) {
      a[j + 1] = a[j];  //前面位置j的元素比tmp大的，将a[j]往后移动一个位置到j+1
      j--;
    }
    a[j + 1] = tmp;     //value2归位
  } else {               //比i+1位置的元素大，a[i]往后移动
    int tmp = a[i];
    j = i + 1;          //从i的后一个位置开始往后搜索
    while (j < Count && tmp > a[j]) {
      a[j - 1] = a[j];  //a[j]比tmp小，将a[j]往前移动一个位置到a[j-1]
      j++;
    }
    a[j - 1] = tmp;
  }
  //上面if...else使用了插入排序的思路，时间复杂度O(n);
  //也可以使用排序使得数组有序，但时间复杂度为O(n^2)。
  return 0;
}
int query(int a[], int value) /* 用二分法在有序数组a中查找元素value的函数 */
{
  int i = 0, j = Count - 1;
  while (i <= j) {
    int m = (i + j) >> 1;
    if (value < a[m])
      j = m - 1;
    else if (a[m] < value)
      i = m + 1;
    else
      return m;
  }
  return -1;
}
